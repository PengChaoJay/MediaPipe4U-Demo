# MediaPipe4U-Demo
MediaPipe4U Plugin Demo Project   

Current Plugin Version: **20221220**

How to use:

1. copy plugin to this Plugins folder.
2. compile the project use Rider or Visual studio
3. Open UnrealEngine Editor and run the demo


You can use maklink.bat to link the plugin folder with your project. 

1. Open maklink.bat in "Plugins" folder and change first line:

set DIR="D:\3D_Works\UE\MediaPipe4U\Build" ------> set DIR="[your MediaPipe4U plugin folder]"  

> MediaPipe4U plugin folder is the folder you unzipped into after downloading the MediaPipe4U zip file.

2. save maklink.bat   

3. Run maklink.bat as administrator （Administrator privileges are required to run mklink command）

---   


# FAQ

## Where can I download plugins?

Please visit follow page to find the download plugin link:    
https://github.com/endink/Mediapipe4u-plugin


## Where can I find the document?

Please visit follow page to find the document:       
https://github.com/endink/Mediapipe4u-plugin


## How to fix "The following modules are missing or built with a different engine version" when open project?   
1. Delete follow folder and files in project root folder:   
- DerivedDataCache
- Intermediate
- Saved 
- MediaPipe4U_Demo.sln 

2. Mouse right click "MediaPipe4U_Demo.uproject" and click "Generate Visual Studio project files".

3. Open "MediaPipe4U_Demo.sln " with Visual Studio or Rider and compile project.

> If you accidentally perform a "clean solution" operation that will damage the plugin, please re-download the plugin and copy folders to the plugins directory.

