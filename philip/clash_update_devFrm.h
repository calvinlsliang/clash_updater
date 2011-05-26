///-----------------------------------------------------------------
///
/// @file      clash_update_devFrm.h
/// @author    hobbes
/// Created:   5/13/2011 6:34:08 PM
/// @section   DESCRIPTION
///            clash_update_devFrm class declaration
///
///------------------------------------------------------------------

#ifndef __CLASH_UPDATE_DEVFRM_H__
#define __CLASH_UPDATE_DEVFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/filedlg.h>
#include <wx/button.h>
#include <wx/msgdlg.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/toolbar.h>
////Header Include End

////Dialog Style Start
#undef clash_update_devFrm_STYLE
#define clash_update_devFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class clash_update_devFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		clash_update_devFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("clash_update_dev"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = clash_update_devFrm_STYLE);
		virtual ~clash_update_devFrm();
		void clash_update_devFrmActivate(wxActivateEvent& event);
		void Mnuexit1004Click(wxCommandEvent& event);
		void Mnuabout1005Click(wxCommandEvent& event);
		void WxToolButton1Click(wxCommandEvent& event);
		void WxToolButton2Click(wxCommandEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		void WxButton2Click(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxFileDialog *WxOpenFileDialog3;
		wxButton *WxButton2;
		wxFileDialog *WxOpenFileDialog2;
		wxButton *WxButton1;
		wxMessageDialog *WxMessageDialog1;
		wxMenuBar *WxMenuBar1;
		wxStatusBar *WxStatusBar1;
		wxToolBar *WxToolBar1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXBUTTON2 = 1020,
			ID_WXBUTTON1 = 1019,
			ID_MNU_FILE_1002 = 1002,
			ID_MNU_EXIT_1004 = 1004,
			ID_MNU_HELP_1003 = 1003,
			ID_MNU_ABOUT____1005 = 1005,
			
			ID_WXSTATUSBAR1 = 1012,
			ID_WXTOOLBUTTON2 = 1011,
			ID_WXTOOLBAR1 = 1009,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
