////////////////////////////////////////////////////////////////////////////
// ExecutableCompressor.h	version 1.0.6.10070
// Copyright (C) 2000-2003 Janne Huttunen

#ifndef EC_H
#define EC_H

#define EC_BUILD		24


#ifdef EC_EXPORTS
#define EC_API __declspec(dllexport)
#else
#define EC_API __declspec(dllimport)
#endif

typedef int (CALLBACK *OUTPUT_FUNC)(LPARAM lParam,void* pCompressExecutable,LPCSTR sz,...);

typedef struct _COMPRESSEXECUTABLE
{
	LPCSTR szInput;
	LPCSTR szOutput;
	LPCSTR szTempPath;

	LPCSTR szLibraryPath;
	LPCSTR szIncludePath;
	LPCSTR szExtraLibraries;
	LPCSTR szLink;
	LPCSTR szRC;

	BOOL viQuery;
	DWORD* viFileVersion;
	DWORD* viProductVersion;
	LPCSTR viComments;
	LPCSTR viCompanyName;
	LPCSTR viFileDescription;
	LPCSTR viInternalName;
	LPCSTR viLegalCopyright;
	LPCSTR viLegalTrademarks;
	LPCSTR viOriginalFilename;
	LPCSTR viProductName;
	LPCSTR viFileVersionDescription;
	LPCSTR viProductVersionDescription;
	
	LPCSTR szFileIcon;
	LPCSTR szDialogTitle;

	OUTPUT_FUNC pfOutput;
	OUTPUT_FUNC pfErrorOutput;
	LPARAM lParam;
} COMPRESSEXECUTABLE,*LPCOMPRESSEXECUTABLE;

EC_API BOOL CompressExecutable(LPCOMPRESSEXECUTABLE lpCompress);
EC_API DWORD* GetECVersion();
EC_API LPCSTR GetECVersionStr();
EC_API DWORD GetECBuild();

#ifdef EC_DEFINEVERSIONMACROS
#define MAKEVERSIONLONG(a,b,c,d)	{ MAKELONG(b,a) , MAKELONG(d,c) }
#define GETVERSION1(a)			(WORD)((a)[0]>>16)
#define GETVERSION2(a)			(WORD)((a)[0])
#define GETVERSION3(a)			(WORD)((a)[1]>>16)
#define GETVERSION4(a)			(WORD)((a)[1])
#define GETVERSIONSTR(a)		(int)GETVERSION1(a) << ", " << (int) GETVERSION2(a) << ", " << (int)GETVERSION3(a) << ", " << (int)GETVERSION4(a)
#endif

#endif