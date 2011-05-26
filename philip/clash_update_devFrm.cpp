///-----------------------------------------------------------------
///
/// @file      clash_update_devFrm.cpp
/// @author    hobbes
/// Created:   5/13/2011 6:34:08 PM
/// @section   DESCRIPTION
///            clash_update_devFrm class implementation
///
///------------------------------------------------------------------

#include "clash_update_devFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
#include "Images/clash_update_devFrm_WxToolButton2_XPM.xpm"
////Header Include End

//----------------------------------------------------------------------------
// clash_update_devFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(clash_update_devFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(clash_update_devFrm::OnClose)
	EVT_BUTTON(ID_WXBUTTON2,clash_update_devFrm::WxButton2Click)
	EVT_BUTTON(ID_WXBUTTON1,clash_update_devFrm::WxButton1Click)
	EVT_MENU(ID_MNU_EXIT_1004, clash_update_devFrm::Mnuexit1004Click)
	EVT_MENU(ID_MNU_ABOUT____1005, clash_update_devFrm::Mnuabout1005Click)
	EVT_MENU(ID_WXTOOLBUTTON2,clash_update_devFrm::WxToolButton2Click)
END_EVENT_TABLE()
////Event Table End

clash_update_devFrm::clash_update_devFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

clash_update_devFrm::~clash_update_devFrm()
{
}

void clash_update_devFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	wxInitAllImageHandlers();   //Initialize graphic format handlers

	WxToolBar1 = new wxToolBar(this, ID_WXTOOLBAR1, wxPoint(0, 0), wxSize(333, 29));

	wxBitmap WxToolButton2_BITMAP (clash_update_devFrm_WxToolButton2_XPM);
	wxBitmap WxToolButton2_DISABLE_BITMAP (wxNullBitmap);
	WxToolBar1->AddTool(ID_WXTOOLBUTTON2, wxT(""), WxToolButton2_BITMAP, WxToolButton2_DISABLE_BITMAP, wxITEM_NORMAL, wxT(""), wxT(""));

	WxStatusBar1 = new wxStatusBar(this, ID_WXSTATUSBAR1);
	WxStatusBar1->SetFieldsCount(1);
	WxStatusBar1->SetStatusText(wxT("Clash updater. Author: Calvin Liang <cliang4@berkeley.edu>"),0);
	int WxStatusBar1_Widths[1];
	WxStatusBar1_Widths[0] = -1;
	WxStatusBar1->SetStatusWidths(1,WxStatusBar1_Widths);

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_FILE_1002_Mnu_Obj = new wxMenu(0);
	ID_MNU_FILE_1002_Mnu_Obj->Append(ID_MNU_EXIT_1004, wxT("E&xit\tAlt-X"), wxT("Quit this program"), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_FILE_1002_Mnu_Obj, wxT("&File"));
	
	wxMenu *ID_MNU_HELP_1003_Mnu_Obj = new wxMenu(0);
	ID_MNU_HELP_1003_Mnu_Obj->Append(ID_MNU_ABOUT____1005, wxT("&About... \tF1"), wxT("Show About dialog"), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_HELP_1003_Mnu_Obj, wxT("&Help"));
	SetMenuBar(WxMenuBar1);

	WxMessageDialog1 =  new wxMessageDialog(this, wxT("Hello hello"), wxT("Message box"));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, wxT("File1"), wxPoint(22, 86), wxSize(75, 25), 0, wxDefaultValidator, wxT("WxButton1"));

	WxOpenFileDialog2 =  new wxFileDialog(this, wxT("Choose a file"), wxT(""), wxT(""), wxT("*.*"), wxOPEN);

	WxButton2 = new wxButton(this, ID_WXBUTTON2, wxT("File2"), wxPoint(23, 119), wxSize(75, 25), 0, wxDefaultValidator, wxT("WxButton2"));

	WxOpenFileDialog3 =  new wxFileDialog(this, wxT("Choose a file"), wxT(""), wxT(""), wxT("*.*"), wxOPEN);

	SetStatusBar(WxStatusBar1);
	WxToolBar1->Realize();
	SetToolBar(WxToolBar1);
	SetTitle(wxT("clash_update_dev"));
	SetIcon(wxNullIcon);
	SetSize(8,8,341,254);
	Center();
	
	////GUI Items Creation End
}

void clash_update_devFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * clash_update_devFrmActivate
 */
void clash_update_devFrm::clash_update_devFrmActivate(wxActivateEvent& event)
{
	// insert your code here
}

/*
 * Mnuexit1004Click
 */
void clash_update_devFrm::Mnuexit1004Click(wxCommandEvent& event)
{
	// insert your code here
	Close(true);
}

/*
 * Mnuabout1005Click
 */
void clash_update_devFrm::Mnuabout1005Click(wxCommandEvent& event)
{
	// insert your code here
	wxString msg;
	msg.Printf(
	   _T("This is the About dialog of the example.\n")
	   _T("Welcome to %s"), wxVERSION_STRING
    );
    
    wxMessageBox(msg, _T("About Minimal"), wxOK | wxICON_INFORMATION, this);
}

/*
 * WxToolButton1Click
 */
void clash_update_devFrm::WxToolButton1Click(wxCommandEvent& event)
{
	// insert your code here
    WxOpenFileDialog1->ShowModal();

}

/*
 * WxToolButton2Click
 */
void clash_update_devFrm::WxToolButton2Click(wxCommandEvent& event)
{
	// insert your code here
	WxMessageDialog1->ShowModal();
}

/*
 * WxButton1Click
 */
void clash_update_devFrm::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
	WxOpenFileDialog2->ShowModal();
}

/*
 * WxButton2Click
 */
void clash_update_devFrm::WxButton2Click(wxCommandEvent& event)
{
	// insert your code here
	WxOpenFileDialog3->ShowModal();
}
