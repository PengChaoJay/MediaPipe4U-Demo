# MediaPipe4U-Demo
MediaPipe4U Plugin Demo Project   
---
[简体中文](README_CN.md)   

> This project uses UE 5.1 by default, if you are using UE 5.0, please use UE tools to convert yourself, or you can switch to the 5.0 branch to pull code
>   
>  If you're not familiar with git, you can click [here](https://github.com/endink/MediaPipe4U-Demo/tree/UE_5_0) to switch  UE5.0 version
   
Current Plugin Version: **2023-02-27**

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

## When I update the version of the MediaPipe4U plugin, how do I need to do?

1. Just double click "clean_project.bat", the folder will be deleted.
2. Mouse right click "MediaPipe4U_Demo.uproject" and click "Generate Visual Studio project files".
3. Open "MediaPipe4U_Demo.sln " with Visual Studio or Rider and compile project.
   
> If you accidentally perform a "clean solution" operation that will damage the plugin, please re-download the plugin and copy folders to the plugins directory.

## How to fix "GStreamer-WARNING **: Failed to load plugin 'XXXX\gstassrender.dll'"

This is a known GSteamer dependency warning, and although it is shown in red color, you can ignore it without causing any errors.
