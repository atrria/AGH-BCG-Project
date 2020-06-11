#include <wx/wx.h>
#include "RotarySolidsMainFrame.h"

class MyApp : public wxApp
{	
public:
	virtual bool OnInit();
	virtual int OnExit();
};

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit() 
{
	wxFrame *mainFrame = new RotarySolidsMainFrame(NULL);
	SetTopWindow(mainFrame);
	mainFrame->Show(true);
	wxMessageDialog(NULL, "Witaj w generatorze bry� obrotowych!\nWybierz figur� aby rozpocz��...").ShowModal();
	return true;
}

int MyApp::OnExit()
{
	return 0;
}
