# MediaPipe4U-Demo
MediaPipe4U 插件示例工程
---
[English](README.md)

> 本工程默认使用 UE5.1，如果你使用的是 UE5.0, 请使用 UE 工具自行转换，也可以切换到 5.0 分支拉取代码.   
> 
> 如果你对 git 不熟悉，可以点击 [这里](https://github.com/endink/MediaPipe4U-Demo/tree/UE_5_0) 切换到 UE5.0 分支

兼容的 MediaPipe4U 插件版本: **2022.1.1.20230423**或更高

如何使用:

1. 解压下载的插件到本工程的 **Plugins** 目录.
2. 使用 Rider 或 Visual studio 编译项目
3. 打开 UnrealEngine 编辑器运行

---   

你可以使用 **maklink.bat** 链接插件目录到本工程目录，这样可以统一将插件放到任意目录

1. 打开 Plugins 目录中的 maklink.bat 文件修改第一行:

set DIR="D:\3D_Works\UE\MediaPipe4U\Build" ------> set DIR="[your MediaPipe4U plugin folder]"

> [your MediaPipe4U plugin folder] 是下载 MediaPipe4U 插件解压后保存的目录.

2. 保存 maklink.bat

3. 以管理员身份运行 maklink.bat  （mklink 命令需要管理员身份才能执行）

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
