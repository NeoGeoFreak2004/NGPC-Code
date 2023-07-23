@echo off

cls

::Var declarations
set "emuPath=C:\PROGRAM FILES (X86)\AMELIAN\NGPCBINS\EMUDIR\NeoPop\NeoPop-Win32.exe"
set romName=Test.ngp
SET mypath=%~dp0

::echo %todaystamp%

::Cleaning files
if exist *.rel del *.rel
if exist *.abs del *.abs
if exist *.map del *.map
if exist *.s24 del *.s24
if exist *.ngp del *.ngp

make

%emuPath% %mypath:~0,-1%\%romName%
