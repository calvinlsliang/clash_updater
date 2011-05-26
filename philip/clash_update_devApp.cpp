//---------------------------------------------------------------------------
//
// Name:        clash_update_devApp.cpp
// Author:      hobbes
// Created:     5/13/2011 6:34:08 PM
// Description: 
//
//---------------------------------------------------------------------------

#include "clash_update_devApp.h"
#include "clash_update_devFrm.h"

IMPLEMENT_APP(clash_update_devFrmApp)

bool clash_update_devFrmApp::OnInit()
{
    clash_update_devFrm* frame = new clash_update_devFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int clash_update_devFrmApp::OnExit()
{
	return 0;
}
