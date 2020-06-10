#include "RotarySolidsSelectionFrame.h"
#include "RotarySolidsMainFrame.h"

RotarySolidsSelectionFrame::RotarySolidsSelectionFrame(RotarySolidsMainFrame* parent) : SelectionFrame(parent)
{
	mainFrame = parent;
}

void RotarySolidsSelectionFrame::SquareButtonOnButtonClick( wxCommandEvent& event )
{
	mainFrame->setShape(Shape::square);
}

void RotarySolidsSelectionFrame::RectangleButtonOnButtonClick( wxCommandEvent& event )
{
	mainFrame->setShape(Shape::rectangle);
}

void RotarySolidsSelectionFrame::TriangleButtonOnButtonClick( wxCommandEvent& event )
{
	mainFrame->setShape(Shape::triangle);
}

void RotarySolidsSelectionFrame::CircleButtonOnButtonClick( wxCommandEvent& event )
{
	mainFrame->setShape(Shape::circle);
}

void RotarySolidsSelectionFrame::PolygonButtonOnButtonClick( wxCommandEvent& event )
{
mainFrame->setShape(Shape::polygon);
mainFrame->setPolygonSides(PolygonCtrl->GetValue());
}

void RotarySolidsSelectionFrame::ParabolaButtonOnButtonClick( wxCommandEvent& event )
{
	mainFrame->setShape(Shape::parabola);
}

void RotarySolidsSelectionFrame::LineButtonOnButtonClick( wxCommandEvent& event )
{
	mainFrame->setShape(Shape::line);
}

void RotarySolidsSelectionFrame::SombreroButtonOnButtonClick( wxCommandEvent& event )
{
	mainFrame->setShape(Shape::sombrero);
}

void RotarySolidsSelectionFrame::GenerateShapeButtonOnButtonClick( wxCommandEvent& event )
{
mainFrame->setDefaultSliders();
mainFrame->setNumOfContours(wxAtof(numOfContoursTextCtrl->GetValue()));
mainFrame->setXCoord(wxAtof(xCoordTextCtrl->GetValue()) / 10.);
mainFrame->setZCoord(wxAtof(zCoordTextCtrl->GetValue()) / 10.);
mainFrame->generateShape();
}
