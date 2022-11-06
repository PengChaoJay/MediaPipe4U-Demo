set DIR="D:\3D_Works\UE\MediaPipe4U\Build"

mklink /D "%~dp0Plugins\MediaPipe4U" "%DIR%\MediaPipe4U"
mklink /D "%~dp0Plugins\GStreamer" "%DIR%\GStreamer"
mklink /D "%~dp0Plugins\MediaPipe4UGStreamer" "%DIR%\MediaPipe4UGStreamer"
mklink /D "%~dp0Plugins\MediaPipe4ULiveLink" "%DIR%\MediaPipe4ULiveLink"

pause > nul