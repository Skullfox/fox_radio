var folderMusic = "@fox_music/music";
var cpp = '@fox_music/config.cpp';


var header = '\
class CfgPatches { \r\n\
	class ADDON { \r\n\
		units[] = {}; \r\n\
		weapons[] = {}; \r\n\
        requiredVersion = REQUIRED_VERSION; \r\n\
        requiredAddons[] = {}; \r\n\
	}; \r\n\
};\r\n';


const fs = require('fs');


fs.writeFileSync(cpp, header);
fs.appendFileSync(cpp,"class CfgMusic{\r\n");

var subfolder = fs.readdirSync(folderMusic);
var listMusic = [];
subfolder.forEach(function(artist) {

  console.log(artist)
  var musicTracks = fs.readdirSync(folderMusic + "/" + artist);
  musicTracks.forEach(function(musicTrack) {
    console.log("->" + musicTrack);
    var title = musicTrack.slice(0, -4);
		listMusic.push(title);
    fs.appendFileSync(cpp,'\
      class '+title+'\r\n\
        {\r\n\
          name	= "'+title+'";\r\n\
          sound[]	= { "\\fox_music\\music\\' +artist+'\\'+musicTrack+'", 1, 1};\r\n\
        };\r\n\ '
    );
  });
});
fs.appendFileSync(cpp,"};");

//create cfgSounds
fs.appendFileSync(cpp,"\r\nclass CfgSounds{\r\n");

var subfolder = fs.readdirSync(folderMusic);

subfolder.forEach(function(artist) {

  console.log(artist)
  var musicTracks = fs.readdirSync(folderMusic + "/" + artist);
  musicTracks.forEach(function(musicTrack) {
    console.log("->" + musicTrack);
    var title = musicTrack.slice(0, -4);

    fs.appendFileSync(cpp,'\
      class '+title+'\r\n\
        {\r\n\
          name	= "'+title+'";\r\n\
          sound[]	= { "\\fox_music\\music\\' +artist+'\\'+musicTrack+'", 1, 1,30};\r\n\
        };\r\n\ '
    );
		fs.appendFileSync(cpp,'\
			class '+title+'_2x\r\n\
				{\r\n\
					name	= "'+title+'";\r\n\
					sound[]	= { "\\fox_music\\music\\' +artist+'\\'+musicTrack+'", 30, 1,30};\r\n\
				};\r\n\ '
		);
  });
});
fs.appendFileSync(cpp,"};\r\n");

console.log("----------------");
console.log(listMusic);
fs.appendFileSync(cpp,"class CfgFoxMusic{\r\n");
fs.appendFileSync(cpp,'	addonList[] = {"' + listMusic.join('","') + '"};');
fs.appendFileSync(cpp,"\r\n};");
