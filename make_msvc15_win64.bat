@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars64.bat"
set build=build_msvc15_win64
if not exist %build% mkdir %build%
cd %build%
nmake /f ..\Makefile.msc TOP=..
nmake /f ..\Makefile.msc sqlite3.c TOP=..
nmake /f ..\Makefile.msc sqlite3.dll TOP=..
nmake /f ..\Makefile.msc sqlite3.exe TOP=..
nmake /f ..\Makefile.msc test TOP=..
pause