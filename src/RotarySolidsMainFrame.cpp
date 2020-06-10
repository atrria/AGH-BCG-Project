#include "RotarySolidsMainFrame.h"

RotarySolidsMainFrame::RotarySolidsMainFrame( wxWindow* parent )
:
MainFrame( parent )
{
	xSlider->SetRange(0, 360);
	ySlider->SetRange(0, 360);
	zSlider->SetRange(0, 360);

	setDefaultSliders();
}

void RotarySolidsMainFrame::LeftPanelOnLeftDClick( wxMouseEvent& event )
{
	setDefaultSliders();
	generateShape();
}

void RotarySolidsMainFrame::LeftPanelOnUpdateUI( wxUpdateUIEvent& event )
{
	Repaint(false);
}

void RotarySolidsMainFrame::xLabelOnLeftDClick( wxMouseEvent& event )
{
xSlider->SetValue(180);
rotateByXYZ();
}

void RotarySolidsMainFrame::xSliderUpdated( wxScrollEvent& event )
{
	rotateByXYZ();
}

void RotarySolidsMainFrame::yLabelOnLeftDClick( wxMouseEvent& event )
{
ySlider->SetValue(180);
rotateByXYZ();
}

void RotarySolidsMainFrame::ySliderUpdated( wxScrollEvent& event )
{
	rotateByXYZ();
}

void RotarySolidsMainFrame::zLabelOnLeftDClick( wxMouseEvent& event )
{
	zSlider->SetValue(180);
	rotateByXYZ();
}

void RotarySolidsMainFrame::zSliderUpdated( wxScrollEvent& event )
{
	rotateByXYZ();
}

void RotarySolidsMainFrame::OpenPropertiesWindowButtonOnButtonClick( wxCommandEvent& event )
{
	propertiesFrame = new RotarySolidsSelectionFrame(this);
	propertiesFrame->Show();
}

void RotarySolidsMainFrame::SaveToFileButtonOnButtonClick( wxCommandEvent& event )
{
	wxInitAllImageHandlers();
	
	wxClientDC DC(LeftPanel);
	wxBufferedDC buffDC(&DC);

	int width, height;
	LeftPanel->GetSize(&width, &height);

	wxBitmap bitmapSave(width, height, -1);
	wxMemoryDC memory(bitmapSave);

	memory.Blit(0, 0, width, height, &buffDC, 0, 0);
	memory.SelectObject(bitmapSave);
	std::string fileName = "rysunek" + std::to_string(fileNum++) + ".png";
	bitmapSave.SaveFile(fileName, wxBITMAP_TYPE_PNG);
}

void RotarySolidsMainFrame::ParallelProjectionCheckBoxOnCheckBox( wxCommandEvent& event )
{
	if (event.IsChecked())
	{
		viewParallel = true;
	}
	else
	{
		viewParallel = false;
		setDefaultSliders();
	}
}

wxPoint RotarySolidsMainFrame::Point3DtoPoint2D(Point p, int width, int height, bool discardZ)
{
	if (discardZ)
	{
		return wxPoint((width / 2.) + (width * p.mX), (height / 2.) + (height * p.mY));
	}
	else
	{
		return wxPoint((width / 2.) + ((width / 2.) * p.mX / std::abs(1. + p.mZ)), (height / 2.) + ((height / 2.) * p.mY / std::abs(1. + p.mZ)));
	}
}

void RotarySolidsMainFrame::setDefaultSliders()
{
	xSlider->SetValue(180);
	ySlider->SetValue(180);
	zSlider->SetValue(180);
}

void RotarySolidsMainFrame::setPolygonSides(int sides)
{
	polygonSides = sides;
}

void RotarySolidsMainFrame::generateShape()
{
	xCoord /= 10.;
	zCoord /= 10.;

	switch (shape)
	{
		case Shape::square:
		{
			if (xCoord)
			{
				//	|	A---B
				//	|	|   |
				//	|	D---C
				data.resize(5, std::vector<Point>(solidRoundnessLevel + 1));
				dataWithoutRotation.resize(5, std::vector<Point>(solidRoundnessLevel + 1));
				data[4][0](xCoord, 0., 0.25 + zCoord);
			}
			else
			{
				//	|A---B
				//	||   |
				//	|D---C
				data.resize(4, std::vector<Point>(solidRoundnessLevel + 1));
				dataWithoutRotation.resize(4, std::vector<Point>(solidRoundnessLevel + 1));
			}

			data[0][0](xCoord, 0., 0.25 + zCoord);
			data[1][0](0.25 + xCoord, 0., 0.25 + zCoord);
			data[2][0](0.25 + xCoord, 0., 0. + zCoord);
			data[3][0](xCoord, 0., zCoord);

			break;
		}
		case Shape::rectangle:
		{
			if(xCoord)
			{
				//	|	A-------B
				//	|	|       |
				//	|	D-------C
				data.resize(5, std::vector<Point>(solidRoundnessLevel + 1));
				dataWithoutRotation.resize(5, std::vector<Point>(solidRoundnessLevel + 1));
				data[4][0](xCoord, 0., 0.25 + zCoord);
			}
			else
			{
				//	|A-------B
				//	||       |
				//	|D-------C
				data.resize(4, std::vector<Point>(solidRoundnessLevel + 1));
				dataWithoutRotation.resize(4, std::vector<Point>(solidRoundnessLevel + 1));
			}

			data[0][0](xCoord, 0., 0.25 + zCoord);
			data[1][0](0.45 + xCoord, 0., 0.25 + zCoord);
			data[2][0](0.45 + xCoord, 0., zCoord);
			data[3][0](xCoord, 0., zCoord);

			break;
		}
		case Shape::triangle:
		{
			if (xCoord)
			{
				//	|	A
				//	|	| \
				//  |	|  \
				//	|	B---C
				data.resize(4, std::vector<Point>(solidRoundnessLevel + 1));
				dataWithoutRotation.resize(4, std::vector<Point>(solidRoundnessLevel + 1));
				data[3][0](xCoord, 0., zCoord);
			}
			else
			{
				//	|A
				//	|| \
				//  ||  \
				//	|B---C
				data.resize(3, std::vector<Point>(solidRoundnessLevel + 1));
				dataWithoutRotation.resize(3, std::vector<Point>(solidRoundnessLevel + 1));
			}

			data[0][0](xCoord, 0., zCoord);
			data[1][0](0.25 + xCoord, 0., zCoord);
			data[2][0](xCoord, 0., 0.45 + zCoord);

			break;
		}
		case Shape::circle: // TODO
		{	
			//	|   ---
			//  | /		\
			//	||       |
			//  | \		/
			//	|   ---


			data.resize(solidRoundnessLevel + 1, std::vector<Point>(solidRoundnessLevel + 1));
			dataWithoutRotation.resize(solidRoundnessLevel + 1, std::vector<Point>(solidRoundnessLevel + 1));

			data[0][0](0.2, 0., 0.2);
			double phi = std::atan2(data[0][0].mZ, data[0][0].mX);
			double angleStep = 2 * M_PI / solidRoundnessLevel;
			double radius = std::sqrt(std::pow(data[0][0].mX, 2) + std::pow(data[0][0].mZ, 2));

			#pragma omp parallel for
			for (size_t i = 1; i < solidRoundnessLevel; i++)
			{
				data[i][0].mX = xCoord + radius * std::cos(phi + i * angleStep);
				data[i][0].mZ = zCoord + radius * std::sin(phi + i * angleStep);
				data[i][0].mY = data[0][0].mY;
			}
			data[0][0](xCoord + 0.2, 0., zCoord + 0.2);
			data[solidRoundnessLevel][0] = data[0][0];

			break;
		}
		case Shape::polygon:
		{
			data.resize(polygonSides + 1, std::vector<Point>(solidRoundnessLevel + 1));
			dataWithoutRotation.resize(polygonSides + 1, std::vector<Point>(solidRoundnessLevel + 1));

			data[0][0](0.2, 0., 0.2);
			double phi = std::atan2(data[0][0].mZ, data[0][0].mX);
			double angleStep = 2 * M_PI / polygonSides;
			double radius = std::sqrt(std::pow(data[0][0].mX, 2) + std::pow(data[0][0].mZ, 2));

			#pragma omp parallel for
			for (size_t i = 1; i < polygonSides; i++)
			{
				data[i][0].mX = xCoord + radius * std::cos(phi + i * angleStep);
				data[i][0].mZ = zCoord + radius * std::sin(phi + i * angleStep);
				data[i][0].mY = data[0][0].mY;
			}
			data[0][0](xCoord + 0.2, 0., zCoord + 0.2);
			data[polygonSides][0] = data[0][0];


			break;
		}
		case Shape::parabola: // TODO
		{
			//  ||		   |
			//	| \       /
			//  |  \	 /
			//	|    ---
			data.resize(0);
			dataWithoutRotation.resize(0);

			break;
		}
		case Shape::line:
		{
			data.resize(2, std::vector<Point>(solidRoundnessLevel + 1));
			dataWithoutRotation.resize(2, std::vector<Point>(solidRoundnessLevel + 1));

			data[0][0](xCoord, 0., zCoord);
			data[1][0](0.35 + xCoord, 0., 0.25 + zCoord);

			break;
		}
		case Shape::sombrero:
		{
			data.resize(5, std::vector<Point>(solidRoundnessLevel + 1));
			dataWithoutRotation.resize(5, std::vector<Point>(solidRoundnessLevel + 1));

			data[0][0](xCoord, 0., zCoord);
			data[1][0](0.15 + xCoord, 0., 0.10 + zCoord);
			data[2][0](0.25 + xCoord, 0., 0.35 + zCoord);
			data[3][0](0.50 + xCoord, 0., 0.35 + zCoord);
			data[4][0](0.52 + xCoord, 0., 0.25 + zCoord);

			break;
		}
	}
	/*
	data[0][0](100./std::sqrt(2), 0., 0.);
	data[1][0](0., 0., 100./ std::sqrt(2));
	data[2][0](0., 0., 100. / std::sqrt(2) + 100.);
	data[3][0](100. / std::sqrt(2), 0., 2 * 100. / std::sqrt(2) + 100.);
	data[4][0](100. / std::sqrt(2) + 100., 0., 2 * 100. / std::sqrt(2) + 100.);
	data[5][0](2 * 100. / std::sqrt(2) + 100., 0., 100. / std::sqrt(2) + 100.);
	data[6][0](2 * 100. / std::sqrt(2) + 100., 0., 100. / std::sqrt(2));
	data[7][0](100. / std::sqrt(2) + 100., 0., 0.);
	*/

	#pragma omp parallel for
	for (size_t i = 0; i < data.size(); i++)
	{
		nextPoints(data[i]);
	}

	for (size_t i = 0; i < data.size(); i++)
	{
		for (size_t j = 0; j < data[0].size(); j++)
		{
			dataWithoutRotation[i][j] = data[i][j];
		}
	}
}

void RotarySolidsMainFrame::circleNextPoints(std::vector<Point>& circle)
{
	double phi = std::atan2(circle[0].mX, circle[0].mZ); // atan2 bierze pod uwagę znaki
	double angleStep = 2. * M_PI / solidRoundnessLevel;
	double radius = std::sqrt(std::pow(circle[0].mX, 2) + std::pow(circle[0].mZ, 2));

	#pragma omp parallel for
	for (size_t i = 1; i < solidRoundnessLevel; i++)
	{
		circle[i].mZ = radius * std::cos(phi + i * angleStep);
		circle[i].mX = radius * std::sin(phi + i * angleStep);
		circle[i].mY = circle[0].mY;	
	}
	circle[solidRoundnessLevel].mX = circle[0].mX;
	circle[solidRoundnessLevel].mY = circle[0].mY;
	circle[solidRoundnessLevel].mZ = circle[0].mZ;
}

void RotarySolidsMainFrame::setShape(Shape shape)
{
	this->shape = shape;
}

void RotarySolidsMainFrame::Repaint(bool discardZ)
{
	wxClientDC DC(LeftPanel);
	wxBufferedDC buffDC(&DC);

	int width, height;
	LeftPanel->GetSize(&width, &height);
	LeftPanel->SetBackgroundColour(wxColor(*wxWHITE));
	buffDC.Clear();
	buffDC.SetClippingRegion(wxRect(0, 0, width, height));
	drawAxis(buffDC, width, height);

	if (viewParallel)
	{
		int viewX = width / 2, viewY = height / 2;
		xSlider->SetValue(90);
		rotateByXYZ();
		drawShape(buffDC, viewX, viewY, viewParallel);
		for (size_t i = 0; i < data.size(); i++)
		{
			for (size_t j = 0; j < data[0].size(); j++)
			{
				data[i][j] = dataWithoutRotation[i][j];
			}
		}
		
	}
	else
	{
		drawShape(buffDC, width, height, viewParallel);
	}


	Update();
}

void RotarySolidsMainFrame::drawAxis(wxBufferedDC& buffDC, int width, int height)
{
	buffDC.SetPen(wxPen(*wxRED_PEN));
	buffDC.DrawLine((width / 2.), 100 * (width / 2.), (width / 2.), -100 * (width / 2.));
	buffDC.DrawLine(-100 * (height / 2.), (height / 2.), 100 * (height / 2.), (height / 2.));
}

void RotarySolidsMainFrame::setNumOfContours(int num)
{
	solidRoundnessLevel = num;
}

void RotarySolidsMainFrame::drawShape(wxBufferedDC& buffDC, int width, int height, bool discardZ)
{
	buffDC.SetPen(wxColor(73, 135, 235)); // kontur
	buffDC.SetBrush(wxColor(161, 177, 201)); // wypełnienie

	std::vector<Segment> triangles;
	triangles.resize(2 * data.size() * solidRoundnessLevel);
	wxPoint shapePoints[3];
	size_t k = 0;

	#pragma omp parallel for
	for (size_t i = 1; i < data.size(); i++)
	{	
		#pragma omp parallel for
		for (size_t j = 1; j < data[0].size(); j++)
		{
			triangles[k] = Segment(data[i-1][j-1], data[i][j-1], data[i][j]);
			triangles[k+1] = Segment(data[i-1][j-1], data[i-1][j], data[i][j]);
			k += 2;
		}
	}

	std::sort(triangles.begin(), triangles.end(), [](Segment p1, Segment p2){ return p1.sumZ() > p2.sumZ(); });

	#pragma omp parallel for
	for (size_t i = 0; i < triangles.size(); i++)
	{
		shapePoints[0] = Point3DtoPoint2D(triangles[i].mA, width, height, discardZ);
		shapePoints[1] = Point3DtoPoint2D(triangles[i].mB, width, height, discardZ);
		shapePoints[2] = Point3DtoPoint2D(triangles[i].mC, width, height, discardZ);

		buffDC.DrawPolygon(3, shapePoints);
	}
}

void RotarySolidsMainFrame::rotateByXYZ()
{
	double phi, r, angleChange;

	angleChange = (xSlider->GetValue() - 180.) * (M_PI / 180.);

	#pragma omp parallel for
	for (size_t i = 0; i < data.size(); i++)
	{
		#pragma omp parallel for
		for (size_t j = 0; j < data[0].size(); j++)
		{
			phi = std::atan2(dataWithoutRotation[i][j].mY, dataWithoutRotation[i][j].mZ);
			r = std::sqrt(std::pow(dataWithoutRotation[i][j].mY, 2) + std::pow(dataWithoutRotation[i][j].mZ, 2));
			
			data[i][j].mZ = std::cos(phi + angleChange) * r;
			data[i][j].mY = std::sin(phi + angleChange) * r;
			data[i][j].mX = dataWithoutRotation[i][j].mX;
		}
	}

	angleChange = (ySlider->GetValue() - 180.) * (M_PI / 180.);

	#pragma omp parallel for
	for (size_t i = 0; i < data.size(); i++)
	{
		for (size_t j = 0; j < data[0].size(); j++)
		{
			phi = std::atan2(data[i][j].mX, data[i][j].mZ);
			r = std::sqrt(std::pow(data[i][j].mX, 2) + std::pow(data[i][j].mZ, 2));

			data[i][j].mZ = std::cos(phi + angleChange) * r;
			data[i][j].mX = std::sin(phi + angleChange) * r;
			data[i][j].mY = data[i][j].mY;
		}
	}

	angleChange = (zSlider->GetValue() - 180.) * (M_PI / 180.);

	#pragma omp parallel for
	for (size_t i = 0; i < data.size(); i++)
	{
		for (size_t j = 0; j < data[0].size(); j++)
		{
			phi = std::atan2(data[i][j].mY, data[i][j].mX);
			r = std::sqrt(std::pow(data[i][j].mX, 2) + std::pow(data[i][j].mY, 2));

			data[i][j].mX = std::cos(phi + angleChange) * r;
			data[i][j].mY = std::sin(phi + angleChange) * r;
			data[i][j].mZ = data[i][j].mZ;
		}
	}
}

void RotarySolidsMainFrame::setXCoord(int x)
{
	xCoord = x;
}

void RotarySolidsMainFrame::nextPoints(std::vector<Point>& data)
{
	double phi = std::atan2(data[0].mY, data[0].mX); // atan2 bierze pod uwagę znaki
	double angleStep = 2. * M_PI / solidRoundnessLevel;
	double radius = std::sqrt(std::pow(data[0].mX, 2) + std::pow(data[0].mY, 2));

	#pragma omp parallel for
	for (size_t i = 1; i < solidRoundnessLevel; i++)
	{
		data[i].mX = radius * std::cos(phi + i * angleStep);
		data[i].mY = radius * std::sin(phi + i * angleStep);
		data[i].mZ = data[0].mZ;
	}
	data[solidRoundnessLevel].mX = data[0].mX;
	data[solidRoundnessLevel].mY = data[0].mY;
	data[solidRoundnessLevel].mZ = data[0].mZ;
}

void RotarySolidsMainFrame::setZCoord(int z)
{
	zCoord = z;
}