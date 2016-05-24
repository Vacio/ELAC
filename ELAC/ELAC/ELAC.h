
// ELAC.h : main header file for the ELAC application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CELACApp:
// See ELAC.cpp for the implementation of this class
//

class CELACApp : public CWinApp
{
public:
	CELACApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CELACApp theApp;
