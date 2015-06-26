HFClib is my own class library which Locate uses. There is source code for HFC in 
"HFClib sources" directory. However, there is also combiled libraries in lib and 
lib64 directories. 3rdparty directory contains header files and combiled libraries 
for 3rd party libraries (PCRE, md5, bz2lib, see LICENSE-PCRE and LICENSE-BZIP2 for 
licenses). 

Locate directory contains:

common: a library containing common routies for locate.exe, locate32.exe and updtdb32.exe
keyhook: KeyboardProc for SetWindowsHook should be in an external file. 
ImageHandles: GDI+ frontend. 
Locatedb: database information classes, database updater
locater: locater class
locate: sources for locate.exe
locate32: sources for locate32.exe
updatedb: sources for updtdb32.exe
settingstool: sources for settings tool
languages: sources for lan_en.dll
