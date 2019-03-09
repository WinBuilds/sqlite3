@echo off
set build=build_nmake
if not exist %build% mkdir %build%
cd %build%
nmake /f ..\Makefile.msc TOP=..
nmake /f ..\Makefile.msc sqlite3.c TOP=..
nmake /f ..\Makefile.msc sqlite3.dll TOP=..
nmake /f ..\Makefile.msc sqlite3.exe TOP=..
nmake /f ..\Makefile.msc test TOP=..
pause