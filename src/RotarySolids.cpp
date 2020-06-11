///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "RotarySolids.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWFRAME ) );

	wxBoxSizer* MainSizer;
	MainSizer = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* LeftSizer;
	LeftSizer = new wxBoxSizer( wxVERTICAL );

	LeftPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 700,700 ), wxTAB_TRAVERSAL );
	LeftPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );
	LeftPanel->SetMinSize( wxSize( 700,700 ) );
	LeftPanel->SetMaxSize( wxSize( 800,800 ) );

	LeftSizer->Add( LeftPanel, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	MainSizer->Add( LeftSizer, 3, wxEXPAND|wxSHAPED, 5 );

	wxBoxSizer* RightSizer;
	RightSizer = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* SlidersSizer;
	SlidersSizer = new wxBoxSizer( wxVERTICAL );

	xLabel = new wxStaticText( this, wxID_ANY, wxT("Obrót oś X"), wxDefaultPosition, wxDefaultSize, 0 );
	xLabel->Wrap( -1 );
	xLabel->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	xLabel->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	xLabel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWFRAME ) );

	SlidersSizer->Add( xLabel, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 10 );

	xSlider = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxSize( -1,-1 ), wxSL_HORIZONTAL );
	xSlider->SetMinSize( wxSize( -1,50 ) );

	SlidersSizer->Add( xSlider, 0, wxEXPAND, 5 );

	yLabel = new wxStaticText( this, wxID_ANY, wxT("Obrót oś Y"), wxDefaultPosition, wxDefaultSize, 0 );
	yLabel->Wrap( -1 );
	yLabel->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	yLabel->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	yLabel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWFRAME ) );

	SlidersSizer->Add( yLabel, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 10 );

	ySlider = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxSize( -1,50 ), wxSL_HORIZONTAL );
	SlidersSizer->Add( ySlider, 0, wxEXPAND, 5 );

	zLabel = new wxStaticText( this, wxID_ANY, wxT("Obrót oś Z"), wxDefaultPosition, wxDefaultSize, 0 );
	zLabel->Wrap( -1 );
	zLabel->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	zLabel->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	zLabel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWFRAME ) );

	SlidersSizer->Add( zLabel, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 10 );

	zSlider = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxSize( -1,50 ), wxSL_HORIZONTAL );
	SlidersSizer->Add( zSlider, 0, wxEXPAND, 5 );


	RightSizer->Add( SlidersSizer, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	OpenPropertiesWindowButton = new wxButton( this, wxID_ANY, wxT("Wybierz figurę"), wxDefaultPosition, wxSize( 200,50 ), 0 );
	OpenPropertiesWindowButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );

	bSizer15->Add( OpenPropertiesWindowButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 10 );

	SaveToFileButton = new wxButton( this, wxID_ANY, wxT("Zapisz do pliku"), wxDefaultPosition, wxSize( 200,50 ), 0 );
	SaveToFileButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );

	bSizer15->Add( SaveToFileButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 10 );


	RightSizer->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* RightViewSizer;
	RightViewSizer = new wxBoxSizer( wxVERTICAL );

	parallelViewReset = new wxButton( this, wxID_ANY, wxT("Widok 3D"), wxDefaultPosition, wxSize( 200,50 ), 0 );
	parallelViewReset->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );

	RightViewSizer->Add( parallelViewReset, 0, wxALL, 5 );

	parallelView1 = new wxButton( this, wxID_ANY, wxT("Rzut I"), wxDefaultPosition, wxSize( 200,50 ), 0 );
	parallelView1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );

	RightViewSizer->Add( parallelView1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	parallelView2 = new wxButton( this, wxID_ANY, wxT("Rzut II"), wxDefaultPosition, wxSize( 200,50 ), 0 );
	parallelView2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );

	RightViewSizer->Add( parallelView2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	parallelView3 = new wxButton( this, wxID_ANY, wxT("Rzut III"), wxDefaultPosition, wxSize( 200,50 ), 0 );
	parallelView3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );

	RightViewSizer->Add( parallelView3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	RightSizer->Add( RightViewSizer, 2, wxALIGN_CENTER|wxALL, 5 );


	MainSizer->Add( RightSizer, 2, wxEXPAND, 5 );


	this->SetSizer( MainSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	LeftPanel->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MainFrame::LeftPanelOnLeftDClick ), NULL, this );
	LeftPanel->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MainFrame::LeftPanelOnUpdateUI ), NULL, this );
	xLabel->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MainFrame::xLabelOnLeftDClick ), NULL, this );
	xSlider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	yLabel->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MainFrame::yLabelOnLeftDClick ), NULL, this );
	ySlider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	zLabel->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MainFrame::zLabelOnLeftDClick ), NULL, this );
	zSlider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	OpenPropertiesWindowButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OpenPropertiesWindowButtonOnButtonClick ), NULL, this );
	SaveToFileButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::SaveToFileButtonOnButtonClick ), NULL, this );
	parallelViewReset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::parallelViewResetOnButtonClick ), NULL, this );
	parallelView1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::parallelView1OnButtonClick ), NULL, this );
	parallelView2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::parallelView2OnButtonClick ), NULL, this );
	parallelView3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::parallelView3OnButtonClick ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	LeftPanel->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MainFrame::LeftPanelOnLeftDClick ), NULL, this );
	LeftPanel->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MainFrame::LeftPanelOnUpdateUI ), NULL, this );
	xLabel->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MainFrame::xLabelOnLeftDClick ), NULL, this );
	xSlider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	xSlider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrame::xSliderUpdated ), NULL, this );
	yLabel->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MainFrame::yLabelOnLeftDClick ), NULL, this );
	ySlider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	ySlider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrame::ySliderUpdated ), NULL, this );
	zLabel->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( MainFrame::zLabelOnLeftDClick ), NULL, this );
	zSlider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	zSlider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrame::zSliderUpdated ), NULL, this );
	OpenPropertiesWindowButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OpenPropertiesWindowButtonOnButtonClick ), NULL, this );
	SaveToFileButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::SaveToFileButtonOnButtonClick ), NULL, this );
	parallelViewReset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::parallelViewResetOnButtonClick ), NULL, this );
	parallelView1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::parallelView1OnButtonClick ), NULL, this );
	parallelView2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::parallelView2OnButtonClick ), NULL, this );
	parallelView3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::parallelView3OnButtonClick ), NULL, this );

}

SelectionFrame::SelectionFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 450,300 ), wxSize( 450,300 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWFRAME ) );

	wxBoxSizer* SelectionMainSizer;
	SelectionMainSizer = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* UpperSizer;
	UpperSizer = new wxBoxSizer( wxVERTICAL );

	ChooseShapeText = new wxStaticText( this, wxID_ANY, wxT("Wybierz figurę:"), wxDefaultPosition, wxDefaultSize, 0 );
	ChooseShapeText->Wrap( -1 );
	ChooseShapeText->SetFont( wxFont( 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	ChooseShapeText->SetForegroundColour( wxColour( 255, 255, 255 ) );

	UpperSizer->Add( ChooseShapeText, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 2 );

	wxBoxSizer* ShapesFirstLineSizer;
	ShapesFirstLineSizer = new wxBoxSizer( wxHORIZONTAL );

	SquareButton = new wxButton( this, wxID_ANY, wxT("kwadrat"), wxDefaultPosition, wxDefaultSize, 0 );

	SquareButton->SetDefault();
	SquareButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );
	SquareButton->SetMinSize( wxSize( 100,50 ) );
	SquareButton->SetMaxSize( wxSize( 100,60 ) );

	ShapesFirstLineSizer->Add( SquareButton, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	RectangleButton = new wxButton( this, wxID_ANY, wxT("prostokąt"), wxDefaultPosition, wxDefaultSize, 0 );
	RectangleButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );
	RectangleButton->SetMinSize( wxSize( 100,50 ) );
	RectangleButton->SetMaxSize( wxSize( 100,50 ) );

	ShapesFirstLineSizer->Add( RectangleButton, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	TriangleButton = new wxButton( this, wxID_ANY, wxT("trójkąt"), wxDefaultPosition, wxDefaultSize, 0 );
	TriangleButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );
	TriangleButton->SetMinSize( wxSize( 100,50 ) );
	TriangleButton->SetMaxSize( wxSize( 100,50 ) );

	ShapesFirstLineSizer->Add( TriangleButton, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	CircleButton = new wxButton( this, wxID_ANY, wxT("okrąg"), wxDefaultPosition, wxDefaultSize, 0 );
	CircleButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );
	CircleButton->SetMinSize( wxSize( 100,50 ) );
	CircleButton->SetMaxSize( wxSize( 100,50 ) );

	ShapesFirstLineSizer->Add( CircleButton, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	UpperSizer->Add( ShapesFirstLineSizer, 1, wxALL, 3 );

	wxBoxSizer* ShapesSecondLineSizer;
	ShapesSecondLineSizer = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* PolygonSizer;
	PolygonSizer = new wxBoxSizer( wxVERTICAL );

	PolygonButton = new wxButton( this, wxID_ANY, wxT("wielokąt"), wxDefaultPosition, wxDefaultSize, 0 );
	PolygonButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );
	PolygonButton->SetMinSize( wxSize( 95,30 ) );
	PolygonButton->SetMaxSize( wxSize( 100,50 ) );

	PolygonSizer->Add( PolygonButton, 0, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 3 );

	PolygonCtrl = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL|wxSP_ARROW_KEYS, 0, 15, 5 );
	PolygonCtrl->SetFont( wxFont( 8, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	PolygonCtrl->SetMinSize( wxSize( 60,20 ) );

	PolygonSizer->Add( PolygonCtrl, 0, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 1 );


	ShapesSecondLineSizer->Add( PolygonSizer, 0, wxALL, 5 );

	ParabolaButton = new wxButton( this, wxID_ANY, wxT("parabola"), wxDefaultPosition, wxDefaultSize, 0 );
	ParabolaButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );
	ParabolaButton->SetMinSize( wxSize( 100,50 ) );
	ParabolaButton->SetMaxSize( wxSize( 100,50 ) );

	ShapesSecondLineSizer->Add( ParabolaButton, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	LineButton = new wxButton( this, wxID_ANY, wxT("odcinek"), wxDefaultPosition, wxDefaultSize, 0 );
	LineButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );
	LineButton->SetMinSize( wxSize( 100,50 ) );
	LineButton->SetMaxSize( wxSize( 100,50 ) );

	ShapesSecondLineSizer->Add( LineButton, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	SombreroButton = new wxButton( this, wxID_ANY, wxT("sombrero"), wxDefaultPosition, wxDefaultSize, 0 );
	SombreroButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );
	SombreroButton->SetMinSize( wxSize( 100,50 ) );
	SombreroButton->SetMaxSize( wxSize( 100,50 ) );

	ShapesSecondLineSizer->Add( SombreroButton, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	UpperSizer->Add( ShapesSecondLineSizer, 1, wxALL, 3 );


	SelectionMainSizer->Add( UpperSizer, 4, 0, 5 );

	wxBoxSizer* LowerSizer;
	LowerSizer = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* xCoordInputSizer;
	xCoordInputSizer = new wxBoxSizer( wxVERTICAL );

	xCoordText = new wxStaticText( this, wxID_ANY, wxT("Współrzędna X:"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL|wxST_NO_AUTORESIZE );
	xCoordText->Wrap( -1 );
	xCoordText->SetFont( wxFont( 8, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	xCoordText->SetForegroundColour( wxColour( 255, 255, 255 ) );

	xCoordInputSizer->Add( xCoordText, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	xCoordTextCtrl = new wxTextCtrl( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxTE_CENTER );
	#ifdef __WXGTK__
	if ( !xCoordTextCtrl->HasFlag( wxTE_MULTILINE ) )
	{
	xCoordTextCtrl->SetMaxLength( 7 );
	}
	#else
	xCoordTextCtrl->SetMaxLength( 7 );
	#endif
	xCoordTextCtrl->SetFont( wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	xCoordTextCtrl->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	xCoordTextCtrl->SetBackgroundColour( wxColour( 161, 161, 161 ) );
	xCoordTextCtrl->SetMinSize( wxSize( 100,50 ) );

	xCoordInputSizer->Add( xCoordTextCtrl, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	LowerSizer->Add( xCoordInputSizer, 1, 0, 5 );

	wxBoxSizer* zCoordInputSizer;
	zCoordInputSizer = new wxBoxSizer( wxVERTICAL );

	zCoordText = new wxStaticText( this, wxID_ANY, wxT("Współrzędna Z:"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL|wxST_NO_AUTORESIZE );
	zCoordText->Wrap( -1 );
	zCoordText->SetFont( wxFont( 8, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	zCoordText->SetForegroundColour( wxColour( 255, 255, 255 ) );

	zCoordInputSizer->Add( zCoordText, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	zCoordTextCtrl = new wxTextCtrl( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxTE_CENTER );
	#ifdef __WXGTK__
	if ( !zCoordTextCtrl->HasFlag( wxTE_MULTILINE ) )
	{
	zCoordTextCtrl->SetMaxLength( 7 );
	}
	#else
	zCoordTextCtrl->SetMaxLength( 7 );
	#endif
	zCoordTextCtrl->SetFont( wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	zCoordTextCtrl->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	zCoordTextCtrl->SetBackgroundColour( wxColour( 161, 161, 161 ) );
	zCoordTextCtrl->SetMinSize( wxSize( 100,50 ) );

	zCoordInputSizer->Add( zCoordTextCtrl, 0, wxALL, 5 );


	LowerSizer->Add( zCoordInputSizer, 1, 0, 5 );

	wxBoxSizer* numOfContoursInputSizer;
	numOfContoursInputSizer = new wxBoxSizer( wxVERTICAL );

	numOfContoursText = new wxStaticText( this, wxID_ANY, wxT("Liczba konturów:"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL|wxST_NO_AUTORESIZE );
	numOfContoursText->Wrap( -1 );
	numOfContoursText->SetFont( wxFont( 8, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	numOfContoursText->SetForegroundColour( wxColour( 255, 255, 255 ) );

	numOfContoursInputSizer->Add( numOfContoursText, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	numOfContoursTextCtrl = new wxTextCtrl( this, wxID_ANY, wxT("30"), wxDefaultPosition, wxDefaultSize, wxTE_CENTER );
	#ifdef __WXGTK__
	if ( !numOfContoursTextCtrl->HasFlag( wxTE_MULTILINE ) )
	{
	numOfContoursTextCtrl->SetMaxLength( 2 );
	}
	#else
	numOfContoursTextCtrl->SetMaxLength( 2 );
	#endif
	numOfContoursTextCtrl->SetFont( wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	numOfContoursTextCtrl->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	numOfContoursTextCtrl->SetBackgroundColour( wxColour( 161, 161, 161 ) );
	numOfContoursTextCtrl->SetMinSize( wxSize( 100,50 ) );

	numOfContoursInputSizer->Add( numOfContoursTextCtrl, 0, wxALL, 5 );


	LowerSizer->Add( numOfContoursInputSizer, 1, 0, 5 );

	wxBoxSizer* GenerateShapeSizer;
	GenerateShapeSizer = new wxBoxSizer( wxVERTICAL );

	GenerateShapeButton = new wxButton( this, wxID_ANY, wxT("Generuj\nbryłę"), wxDefaultPosition, wxDefaultSize, 0 );
	GenerateShapeButton->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	GenerateShapeButton->SetForegroundColour( wxColour( 255, 255, 255 ) );
	GenerateShapeButton->SetBackgroundColour( wxColour( 77, 121, 170 ) );
	GenerateShapeButton->SetMinSize( wxSize( 200,75 ) );

	GenerateShapeSizer->Add( GenerateShapeButton, 0, wxALL, 5 );


	LowerSizer->Add( GenerateShapeSizer, 1, 0, 5 );


	SelectionMainSizer->Add( LowerSizer, 2, 0, 5 );


	this->SetSizer( SelectionMainSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	SquareButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::SquareButtonOnButtonClick ), NULL, this );
	RectangleButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::RectangleButtonOnButtonClick ), NULL, this );
	TriangleButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::TriangleButtonOnButtonClick ), NULL, this );
	CircleButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::CircleButtonOnButtonClick ), NULL, this );
	PolygonButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::PolygonButtonOnButtonClick ), NULL, this );
	ParabolaButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::ParabolaButtonOnButtonClick ), NULL, this );
	LineButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::LineButtonOnButtonClick ), NULL, this );
	SombreroButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::SombreroButtonOnButtonClick ), NULL, this );
	GenerateShapeButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::GenerateShapeButtonOnButtonClick ), NULL, this );
}

SelectionFrame::~SelectionFrame()
{
	// Disconnect Events
	SquareButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::SquareButtonOnButtonClick ), NULL, this );
	RectangleButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::RectangleButtonOnButtonClick ), NULL, this );
	TriangleButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::TriangleButtonOnButtonClick ), NULL, this );
	CircleButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::CircleButtonOnButtonClick ), NULL, this );
	PolygonButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::PolygonButtonOnButtonClick ), NULL, this );
	ParabolaButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::ParabolaButtonOnButtonClick ), NULL, this );
	LineButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::LineButtonOnButtonClick ), NULL, this );
	SombreroButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::SombreroButtonOnButtonClick ), NULL, this );
	GenerateShapeButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SelectionFrame::GenerateShapeButtonOnButtonClick ), NULL, this );

}
