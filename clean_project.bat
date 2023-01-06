@echo off
set DIR=%~dp0
rd /s /q "%DIR%Intermediate"
rd /s /q "%DIR%DerivedDataCache"
rd /s /q "%DIR%Binaries"
rd /s /q "%DIR%Saved"
@echo on
@echo project clear succeed !! Recompole it use VisualStudio or Rider.
pause