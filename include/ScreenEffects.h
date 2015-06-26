#ifndef SCREENEFFECTS_H
#define SCREENEFFECTS_H

/* THIS LIBRARY IS NOT THREAD SAFE */

#define POSITION_HLEFT			0xF0000001
#define POSITION_HCENTER		0xF0000000
#define POSITION_HRIGHT			0xF0000002
#define POSITION_VTOP			0xF0000004
#define POSITION_VCENTER		0xF0000000
#define POSITION_VBOTTOM		0xF0000008


#define TRACKBARFLAG_SHOWBARS		0x0001
#define TRACKBARFLAG_SHOWMAXBARS	0x0002



// for internal use
#define TRACKBARFLAG_CLEARTEXT		0x2000
#define TRACKBARFLAG_CLEARALL		0x4000

/* 
BOOL ScreenShowText(LPCSTR szText,DWORD dwTimeInMs,COLORREF cForeColor,HFONT hFont,DWORD pPosition,HINSTANCE hInstance,BOOL bThreaded):
Shows text in screen
BOOL ScreenShowBitmap(HBITMAP hBitmap,DWORD dwTimeInMs,DWORD pPosition,HINSTANCE hInstance,BOOL bThreaded);
Shows bitmap in screen
BOOL ScreenShowIcon(HICON hIcon,DWORD dwTimeInMs,DWORD pPosition,HINSTANCE hInstance,BOOL bThreaded);
Shows icon in screen
BOOL ScreenShowImageFromList(HIMAGELIST hImageList,int nIndex,DWORD dwTimeInMs,DWORD pPosition,HINSTANCE hInstance,BOOL bThreaded);
Shows image from ImageList
BOOL ScreenShowTrackBar(WORD nBars,WORD nMax,WORD wFlags,DWORD dwTimeInMs,DWORD pPosition,HINSTANCE hInstance,BOOL bThreaded);
Shows trackbar
szText:			text to be displayed
cForeColor:		text color
hFont:			font, can be null
pPosition:		position, can be pointer to sturct RECT or combination of following:
					POSITION_HLEFT,POSITION_HCENTER,POSITION_HRIGHT
					POSITION_VLEFT,POSITION_VCENTER,POSITION_VRIGHT
hIntance		handle to instance
bTreaded		returns before window is shown
hBitmap			handle to bitmap
hImageList		handle to imagelist
nIndex			index to image of the imagelist
nPos			number of bars
nMax			maximum number of bars
*/
BOOL ScreenShowText(LPCSTR szText,DWORD dwTimeInMs,COLORREF cForeColor,HFONT hFont,
					DWORD pPosition,HINSTANCE hInstance,BOOL bThreaded);
BOOL ScreenShowBitmap(HBITMAP hBitmap,DWORD dwTimeInMs,DWORD pPosition,HINSTANCE hInstance,BOOL bThreaded);
BOOL ScreenShowIcon(HICON hIcon,DWORD dwTimeInMs,DWORD pPosition,HINSTANCE hInstance,BOOL bThreaded);
BOOL ScreenShowImageFromList(HIMAGELIST hImageList,int nIndex,DWORD dwTimeInMs,DWORD pPosition,HINSTANCE hInstance,BOOL bThreaded);
BOOL ScreenShowTrackBar(WORD nBars,WORD nMax,COLORREF cColor,WORD wFlags,DWORD dwTimeInMs,DWORD pPosition,HINSTANCE hInstance,BOOL bThreaded);



BOOL ScreenShowEnd();
BOOL ScreenIsStillOpen();


#endif