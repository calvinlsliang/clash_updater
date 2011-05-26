//---------------------------------------------------------------------------
//
// Name:        clash_update_devApp.h
// Author:      hobbes
// Created:     5/13/2011 6:34:08 PM
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __CLASH_UPDATE_DEVFRMApp_h__
#define __CLASH_UPDATE_DEVFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class clash_update_devFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
