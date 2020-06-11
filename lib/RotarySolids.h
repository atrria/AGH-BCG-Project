///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/spinctrl.h>
#include <wx/textctrl.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		wxPanel* LeftPanel;
		wxStaticText* xLabel;
		wxSlider* xSlider;
		wxStaticText* yLabel;
		wxSlider* ySlider;
		wxStaticText* zLabel;
		wxSlider* zSlider;
		wxButton* OpenPropertiesWindowButton;
		wxButton* SaveToFileButton;
		wxButton* parallelViewReset;
		wxButton* parallelView1;
		wxButton* parallelView2;
		wxButton* parallelView3;

		// Virtual event handlers, overide them in your derived class
		virtual void LeftPanelOnLeftDClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void LeftPanelOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void xLabelOnLeftDClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void xyzSliderUpdated( wxScrollEvent& event ) { event.Skip(); }
		virtual void yLabelOnLeftDClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void zLabelOnLeftDClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void OpenPropertiesWindowButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void SaveToFileButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void parallelViewResetOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void parallelView1OnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void parallelView2OnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void parallelView3OnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Bryły szkieletowe obrotowe"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1000,700 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SelectionFrame
///////////////////////////////////////////////////////////////////////////////
class SelectionFrame : public wxFrame
{
	private:

	protected:
		wxStaticText* ChooseShapeText;
		wxButton* SquareButton;
		wxButton* RectangleButton;
		wxButton* TriangleButton;
		wxButton* CircleButton;
		wxButton* PolygonButton;
		wxSpinCtrl* PolygonCtrl;
		wxButton* ParabolaButton;
		wxButton* LineButton;
		wxButton* SombreroButton;
		wxStaticText* xCoordText;
		wxTextCtrl* xCoordTextCtrl;
		wxStaticText* zCoordText;
		wxTextCtrl* zCoordTextCtrl;
		wxStaticText* numOfContoursText;
		wxTextCtrl* numOfContoursTextCtrl;
		wxButton* GenerateShapeButton;

		// Virtual event handlers, overide them in your derived class
		virtual void SelectionFrameOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void SquareButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void RectangleButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void TriangleButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void CircleButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void PolygonButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void ParabolaButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void LineButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void SombreroButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void numOfContoursTextCtrlOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void GenerateShapeButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		SelectionFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Wybierz właściwości figury"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 450,300 ), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_FLOAT_ON_PARENT|wxSTAY_ON_TOP|wxTAB_TRAVERSAL );

		~SelectionFrame();

};

