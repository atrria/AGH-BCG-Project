﻿#ifndef __RotarySolidsSelectionFrame__
#define __RotarySolidsSelectionFrame__

/**
@file
Subclass of SelectionFrame, which is generated by wxFormBuilder.
*/

#include "RotarySolids.h"

//// end generated include
extern class RotarySolidsMainFrame* mainFrame;

/** Implementing SelectionFrame */
class RotarySolidsSelectionFrame : public SelectionFrame
{
	protected:
		// Handlers for SelectionFrame events.
		void SquareButtonOnButtonClick( wxCommandEvent& event );
		void RectangleButtonOnButtonClick( wxCommandEvent& event );
		void TriangleButtonOnButtonClick( wxCommandEvent& event );
		void CircleButtonOnButtonClick( wxCommandEvent& event );
		void PolygonButtonOnButtonClick( wxCommandEvent& event );
		void LineButtonOnButtonClick( wxCommandEvent& event );
		void CurveButtonOnButtonClick( wxCommandEvent& event );
		void SombreroButtonOnButtonClick( wxCommandEvent& event );
		void GenerateShapeButtonOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
	//// end generated class members
		RotarySolidsSelectionFrame(RotarySolidsMainFrame* parent);
	private:
		RotarySolidsMainFrame* mainFrame;



};

#endif // __RotarySolidsSelectionFrame__