#include "pch.h"
#include "pch.h"
#include <vtkCylinderSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkCellArray.h>
#include <vtkXMLPolyDataWriter.h>
#include <vtkActor.h>
#include <vtkOBJImporter.h>
#include <vtkImageMapper.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkOBJImporter.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkJPEGReader.h>
#include <vtkImageData.h>
#include <vtkImageMapper.h> // Note: this is a 2D mapper (cf. vtkImageActor which is 3D)
#include <vtkActor2D.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>
#include <vtkPolyDataNormals.h>
#include <vtkCleanPolyData.h>
#include <vtkPolyData.h>
#include <vtkConeSource.h>
#include <vtkTexture.h>
#include <vtkNamedColors.h>
#include <vtkOBJReader.h>
#include <vtkNamedColors.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkProperty.h>
#include <vtkCamera.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkSmartPointer.h>
#include <vtkCubeSource.h>
#include "vtkAutoInit.h"
#include <vtkSphereSource.h>
#include <vtkSphere.h>
#include <vtkBox.h>
#include <vtkSmartPointer.h>
#include <vtkImageViewer2.h>
#include <vtkPNGReader.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkImplicitBoolean.h>
#include <vtkVertexGlyphFilter.h>
#include <vtkSampleFunction.h>
#include <vtkContourFilter.h>
#include <vtkDelaunay2D.h>
#include <vtkVersion.h>
#include <vtkActor.h>
#include <vtkCamera.h>
#include <vtkTransform.h>
#include <vtkImageCanvasSource2D.h>
#include <vtkImageActor.h>
#include <vtkImageData.h>
#include <vtkJPEGReader.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkSmartPointer.h>
#include <vtkSuperquadricSource.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkSmartPointer.h>
#include <vtkInteractorStyleTrackballActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkSmartPointer.h>
#include <vtkPointPicker.h>
#include <vtkCamera.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkObjectFactory.h>
#include <vtkPointPicker.h>
#include<vector>
#include <vtkCamera.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkObjectFactory.h>
#include <vtkCylinderSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkCellArray.h>
#include <vtkXMLPolyDataWriter.h>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkSmartPointer.h>
#include <vtkPointPicker.h>
#include <vtkCamera.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkObjectFactory.h>
#include <vtkCoordinate.h>
#include <vtkRendererCollection.h>
#include <vtkOBJImporter.h>
#include <vtkImageMapper.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkOBJImporter.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkJPEGReader.h>
#include <vtkImageData.h>
#include <vtkImageMapper.h> // Note: this is a 2D mapper (cf. vtkImageActor which is 3D)
#include <vtkActor2D.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>
#include <vtkPolyDataNormals.h>
#include <vtkCleanPolyData.h>
#include <vtkPolyData.h>
#include <vtkConeSource.h>
#include <vtkTexture.h>
#include <vtkNamedColors.h>
#include <vtkOBJReader.h>
#include <vtkNamedColors.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkProperty.h>
#include <vtkCamera.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkSmartPointer.h>
#include <vtkCubeSource.h>
#include "vtkAutoInit.h"
#include <vtkSphereSource.h>
#include <vtkSphere.h>
#include <vtkBox.h>
#include <vtkSmartPointer.h>
#include <vtkImageViewer2.h>
#include <vtkPNGReader.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkImplicitBoolean.h>
#include <vtkVertexGlyphFilter.h>
#include <vtkSampleFunction.h>
#include <vtkContourFilter.h>
#include <vtkDelaunay2D.h>
#include <vtkVersion.h>
#include <vtkActor.h>
#include <vtkCamera.h>
#include <vtkTransform.h>
#include <vtkImageCanvasSource2D.h>
#include <vtkImageActor.h>
#include <vtkImageData.h>
#include <vtkJPEGReader.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper.h>
#include <vtkTextActor.h>
#include <vtkTextProperty.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkSmartPointer.h>
#include <vtkSuperquadricSource.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkSmartPointer.h>
#include <vtkInteractorStyleTrackballActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkSmartPointer.h>
#include <vtkPointPicker.h>
#include <vtkCamera.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkObjectFactory.h>
#include <vtkPointPicker.h>
#include <vtkCamera.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkObjectFactory.h>
#include "pch.h"
#include <vtkCylinderSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkCellArray.h>
#include <vtkXMLPolyDataWriter.h>
#include <vtkActor.h>
#include <vtkOBJImporter.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkOBJImporter.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkPolyDataMapper.h>
#include <vtkPolyDataNormals.h>
#include <vtkCleanPolyData.h>
#include <vtkPolyData.h>
#include <vtkTexture.h>
#include <vtkNamedColors.h>
#include <vtkOBJReader.h>
#include <vtkNamedColors.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkProperty.h>
#include <vtkCamera.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkSmartPointer.h>
#include <vtkCubeSource.h>
#include "vtkAutoInit.h"
#include <vtkSphereSource.h>
#include <vtkSphere.h>
#include <vtkBox.h>
#include <vtkSmartPointer.h>
#include <vtkImageViewer2.h>
#include <vtkPNGReader.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkImplicitBoolean.h>
#include <vtkVertexGlyphFilter.h>
#include <vtkSampleFunction.h>
#include <vtkContourFilter.h>
#include <vtkDelaunay2D.h>
#include <vtkVersion.h>
#include <vtkActor.h>
#include <vtkCamera.h>
#include <vtkTransform.h>
#include <vtkImageCanvasSource2D.h>
#include <vtkImageActor.h>
#include <vtk3DSImporter.h>
#include <vtkImageData.h>
#include <vtkJPEGReader.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkSmartPointer.h>
#include <vtkSuperquadricSource.h>
VTK_MODULE_INIT(vtkRenderingOpenGL2); // VTK was built with vtkRenderingOpenGL2
VTK_MODULE_INIT(vtkInteractionStyle);
VTK_MODULE_INIT(vtkRenderingFreeType);

#define vtkRenderingCore_AUTOINIT 2(vtkRenderingOpenGL2, vtkInteractionStyle);


#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkSmartPointer.h>
#include <vtkPointPicker.h>
#include <vtkCamera.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkObjectFactory.h>
#include <vtkCoordinate.h>
#include <vtkRendererCollection.h>




// struct to represent an aabox
struct aabox {
	float x1, z1, x2, z2;
};

vtkSmartPointer<vtkTextActor> collisionText;


std::vector<aabox> obstacls;


bool gameOver = false;


bool collision(float x, float z, aabox box)
{
	float maxX = std::max(box.x1, box.x2);
	float maxZ = std::max(box.z1, box.z2);
	float minX = std::min(box.x1, box.x2);
	float minZ = std::min(box.z1, box.z2);

	//printf(" x is %f z is %f max X = %f min X = %f max Z = %f min Z = %f",x,z, maxX, minX, maxZ, minZ);
	return (z <= maxZ && z >= minZ && x <= maxX && x >= minX);
}

bool isColludingWithObstacle(float x, float z)
{
	for (unsigned int i = 0; i < obstacls.size(); i++)
	{
		if (collision(x, z, obstacls.at(i)) == true)
		{
			return true;
		}
	}
	return false;
}



vtkSmartPointer<vtkRenderer> renderer;
vtkSmartPointer<vtkRenderWindow> renderWindow;
vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor;
vtkSmartPointer<vtkCamera> camera;
int i = 0.001;
float cptx = 0, cptx_voi = 0, cpty_voi = -9, cptz_voi = 10974;
float cpty = -4.5;
float cptz = 10980;
float camz = 11000;
float camy = 0;
float camx = 0;
float vol_x = 0;
float maximumX = 110;
float minimumX = -90;
float acceleration_max = 3;
float acceleration = 0;
bool avancer = false;
vtkSmartPointer<vtkActor> vollant = vtkSmartPointer<vtkActor>::New();
vtkSmartPointer<vtkActor> voiture = vtkSmartPointer<vtkActor>::New();

vtkSmartPointer<vtkTextActor> scoreTextActor;
vtkSmartPointer<vtkTextActor> speedTextActor;
vtkSmartPointer<vtkTextActor> limitTextActor = vtkSmartPointer<vtkTextActor>::New();
int score = 0;
int speed = 1;
std::string s = "";

void showRightLimitText()
{
	limitTextActor = vtkSmartPointer<vtkTextActor>::New();
	s = "limite droite atteinte";
	limitTextActor->SetInput(s.data());
	limitTextActor->GetTextProperty()->SetFontSize(24);
	limitTextActor->GetTextProperty()->SetColor(1.0, 1.0, 1.0);
	renderer->AddActor2D(limitTextActor);
	limitTextActor->SetPosition(0, 0);
}

void showLeftLimitText()
{
	limitTextActor = vtkSmartPointer<vtkTextActor>::New();
	s = "limite geuche atteinte";
	limitTextActor->SetInput(s.data());
	limitTextActor->GetTextProperty()->SetFontSize(24);
	limitTextActor->GetTextProperty()->SetColor(1.0, 1.0, 1.0);
	renderer->AddActor2D(limitTextActor);
	limitTextActor->SetPosition(0, 0);
}

void removeLimitText()
{
	renderer->RemoveActor(limitTextActor);
}

void showScore()
{
	if (scoreTextActor != NULL)
	{
		renderer->RemoveActor2D(scoreTextActor);
		scoreTextActor = NULL;
	}
	scoreTextActor = vtkSmartPointer<vtkTextActor>::New();
	std::string s = "score : " + std::to_string(score);
	scoreTextActor->SetInput(s.data());

	scoreTextActor->GetTextProperty()->SetFontSize(24);
	scoreTextActor->GetTextProperty()->SetColor(1.0, 1.0, 1.0);
	renderer->AddActor2D(scoreTextActor);
	scoreTextActor->SetPosition(0, 0);
}

void showSpeed()
{
	if (speedTextActor != NULL)
	{
		renderer->RemoveActor2D(speedTextActor);
		speedTextActor = NULL;
	}
	speedTextActor = vtkSmartPointer<vtkTextActor>::New();
	std::string s = "speed : " + std::to_string(speed);
	speedTextActor->SetInput(s.data());

	speedTextActor->GetTextProperty()->SetFontSize(24);
	speedTextActor->GetTextProperty()->SetColor(1.0, 1.0, 1.0);
	renderer->AddActor2D(speedTextActor);
	speedTextActor->SetPosition(500, 0);
}
vtkSmartPointer<vtkTextActor> textActor;

void drawCollisionText(std::string text, float x, float y, bool really)
{

	if (textActor == NULL)
	{
		//renderer->RemoveActor2D(textActor);

		textActor = vtkSmartPointer<vtkTextActor>::New();
		if (really)
		{
			textActor->SetInput("GAME OVER");
			gameOver = true;
		}
		else
		{
			textActor->SetInput("BRAVO !!!!");
		}
		textActor->SetPosition(300, 400);
		textActor->GetTextProperty()->SetFontSize(50);
		textActor->GetTextProperty()->SetColor(1.0, 0.0, 0.0);
		renderer->AddActor2D(textActor);
		renderer->Render();
		collisionText = textActor;
	}
	//return textActor;

}

void removeText()
{
	renderer->RemoveActor(collisionText);
	collisionText = NULL;
}

class customMouseInteractorStyle : public vtkInteractorStyleTrackballCamera
{
public:
	static customMouseInteractorStyle* New();
	vtkTypeMacro(customMouseInteractorStyle, vtkInteractorStyleTrackballCamera);


	virtual void OnKeyPress()
	{// Get the keypress
		vtkRenderWindowInteractor *rwi = this->Interactor;
		//vollant->SetScale(0.01);

		std::string key = rwi->GetKeySym();



	}

	virtual void OnLeftButtonDown()
	{
		std::cout << "Pressed left mouse button." << std::endl;

		vtkInteractorStyleTrackballCamera::OnLeftButtonDown();

	}

	virtual void OnMiddleButtonDown()
	{
		std::cout << "Pressed middle mouse button." << std::endl;
		// Forward events
		//vtkInteractorStyleTrackballCamera::OnMiddleButtonDown();
	}

	virtual void OnRightButtonDown()
	{
		std::cout << "Pressed right mouse button." << std::endl;
		//renderer->GetActiveCamera()->SetPosition(renderer->GetActiveCamera()->GetPosition()[1], renderer->GetActiveCamera()->GetPosition()[1], 10);

		// Forward events
		vtkInteractorStyleTrackballCamera::OnRightButtonDown();
	}

};


void testCollision()
{
	if (isColludingWithObstacle(vollant->GetPosition()[0], vollant->GetPosition()[2]) == true)
	{
		printf("there is a collision");
		if (collisionText == NULL)
			drawCollisionText("collision", 10, 40, true);
		renderer->RemoveActor(voiture);
		renderer->RemoveActor(vollant);
	}
	/* else
	{
		if (collisionText != NULL)
			removeText();
	} */
}

vtkStandardNewMacro(customMouseInteractorStyle);

//////////        Key Press
class MouseInteractorStyle6 : public vtkInteractorStyleTrackballActor
{
public:
	static MouseInteractorStyle6* New();
	vtkTypeMacro(MouseInteractorStyle6, vtkInteractorStyleTrackballActor);


	virtual void onRightButtonUp()
	{
		avancer = false;
	}
	virtual void OnRightButtonDown()
	{
		std::cout << "Pressed middle mouse button." << std::endl;
		if (avancer == true)
		{
			camz -= 0.1;
			cptz -= 0.1;
			vollant->SetPosition(cptx, cpty, cptz);
			renderer->GetActiveCamera()->SetPosition(camx, camy, camz);
			printf("\nlee volant est dans x=%f y = %f z=%f et camera dans z=%f",
				vollant->GetPosition()[0],
				vollant->GetPosition()[1],
				vollant->GetPosition()[2], vollant->GetPosition()[2]);

			renderer->GetRenderWindow()->Render();
		}
		// Forward events
		//vtkInteractorStyleTrackballCamera::OnMiddleButtonDown();
	}
	virtual void OnKeyRelease()
	{
		printf("grr");
		vtkRenderWindowInteractor *rwi = this->Interactor;

		std::string key = rwi->GetKeySym();

		if (key == "Left")
		{
			printf("left was released");
			float pat = 0;
			while (pat < vol_x)
			{
				vollant->RotateZ(-6);
				pat += 6;
				rwi->GetRenderWindow()->Render();

			}

			vollant->SetPosition(cptx, cpty, cptz);
			rwi->GetRenderWindow()->Render();
			vol_x = 0;


		}

		if (key == "Right")
		{

			printf("left was released");
			float pat = 0;
			while (pat < vol_x)
			{
				vollant->RotateZ(6);
				pat += 6;

				rwi->GetRenderWindow()->Render();

			}
			vollant->SetPosition(cptx, cpty, cptz);

			rwi->GetRenderWindow()->Render();

			vol_x = 0;


		}


		testCollision();
	}
	virtual void OnKeyPress()
	{// Get the keypress
		vtkRenderWindowInteractor *rwi = this->Interactor;
		//vollant->SetScale(0.01);

		std::string key = rwi->GetKeySym();

		//////Moving object exemple

		if (key == "Up" && !gameOver)
		{

			score += 5 * speed;


			avancer = true;
			printf("\n posVollant x=%f y=%f z=%f", vollant->GetPosition()[0],
				vollant->GetPosition()[1], vollant->GetPosition()[2]);


			camz -= speed * 2;
			cptz -= speed * 2;
			cptz_voi -= speed * 2;
			renderer->GetActiveCamera()->SetPosition(camx, camy, camz);

			vollant->SetPosition(cptx, cpty, cptz);
			voiture->SetPosition(cptx_voi, cpty_voi, cptz_voi);

			//vollant->SetUserTransform(transform);

			rwi->GetRenderWindow()->Render();

		}
		rwi->GetRenderWindow()->Render();
		if (key == "Down" && !gameOver)
		{
			if (camz + 1 < 11000)
			{
				score -= 5;
				s = ""; 	limitTextActor->SetInput(s.data()); renderer->Render();
				printf("\n posVollant x=%f y=%f z=%f", vollant->GetPosition()[0], vollant->GetPosition()[1], vollant->GetPosition()[2]);
				camz += speed * 2;
				cptz += speed * 2;
				cptz_voi += speed * 2;
				vollant->SetPosition(cptx, cpty, cptz);
				voiture->SetPosition(cptx_voi, cpty_voi, cptz_voi);


				renderer->GetActiveCamera()->SetPosition(camx, camy, camz);
				rwi->GetRenderWindow()->Render();
			}

		}
		if (key == "Left" && !gameOver)
		{  //if(camx>-33)
			if (camx - 2 > minimumX)
			{
				s = ""; 	limitTextActor->SetInput(s.data()); renderer->Render();
				score += 10 * speed;
				{printf("left was pressed");
				printf("\nPosition Vollant = %f", camx);
				camx -= 2;
				cptx = camx;
				cptx_voi -= 2;
				camz -= speed * 2;
				cptz -= speed * 2;
				cptz_voi -= speed * 2;
				vollant->RotateZ(2); vol_x += 2;
				printf("\nvaleur rotation=%d", vol_x);
				vollant->SetPosition(cptx, cpty, cptz);
				voiture->SetPosition(cptx_voi, cpty_voi, cptz_voi);

				renderer->GetActiveCamera()->SetFocalPoint(camx, 0, 0);
				camera->SetPosition(camx, camy, camz);
				rwi->GetRenderWindow()->Render();
				}
			}
			else
			{
				showLeftLimitText();
			}
		}

		if (key == "Right" && !gameOver)
		{
			if (camx + 2 < maximumX)
			{
				s = ""; 	limitTextActor->SetInput(s.data()); renderer->Render();
				score += 10 * speed;
				camz -= speed * 2;
				cptz -= speed * 2;
				cptz_voi -= speed * 2;
				printf("\nPosition Vollant = %f", camx);
				//if (camx < 14.5)
				//{
				camx += 2;
				cptx = camx;
				cptx_voi += 2;
				vollant->RotateZ(-2); vol_x += 2;
				vollant->SetPosition(cptx, cpty, cptz);
				voiture->SetPosition(cptx_voi, cpty_voi, cptz_voi);

				printf("\nvol_x= %f", vol_x);
				renderer->GetActiveCamera()->SetFocalPoint(camx, 0, 0);
				camera->SetPosition(camx, camy, camz);
				rwi->GetRenderWindow()->Render();
			}
			else
			{
				showRightLimitText();
			}

		}

		if (key == "z")
		{
			if (speed < 3)
				speed++;

		}

		if (key == "s")
		{
			if (speed > 1)
				speed--;
		}
		showSpeed();
		testCollision();
		showScore();
		printf("\n la voiture est dans x=%f y = %f z=%f et camera dans x=%f y=%f z=%f",
			voiture->GetPosition()[0],
			voiture->GetPosition()[1],
			voiture->GetPosition()[2], renderer->GetActiveCamera()->GetPosition()[0],
			renderer->GetActiveCamera()->GetPosition()[1], renderer->GetActiveCamera()->GetPosition()[2]);
		if (camz < 10300)
		{
			drawCollisionText("qsd", 0, 0, false);
			renderer->RemoveActor(vollant);
			renderer->RemoveActor(voiture);
		}
	}

	vtkActor* Volant;
	vtkActor* Voiture;

	vtkCamera* Camera;

};
vtkStandardNewMacro(MouseInteractorStyle6);





void addObstacle(float x1, float x2, float z1, float z2)
{
	aabox obs;
	obs.z1 = z1;
	obs.z2 = z2;
	obs.x1 = x1;
	obs.x2 = x2;
	obstacls.push_back(obs);
}

void Deplacement()
{

	while (avancer == true)
	{
		camz -= 1;
		cptz -= acceleration;
		vollant->SetPosition(cptx, cpty, cptz);
		renderer->GetActiveCamera()->SetPosition(camx, camy, camz);
		printf("\nlee volant est dans x=%f y = %f z=%f et camera dans z=%f",
			vollant->GetPosition()[0],
			vollant->GetPosition()[1],
			vollant->GetPosition()[2], vollant->GetPosition()[2]);

		renderer->GetRenderWindow()->Render();
	}
}
void initRenderers()
{
	renderer = vtkSmartPointer<vtkRenderer>::New();
	renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
	renderWindow->AddRenderer(renderer);
	renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
	renderWindowInteractor->SetRenderWindow(renderWindow);
}

vtkActor * importerObstacle(std::string readerhand, float x, float y, float z)
{
	vtkSmartPointer<vtkOBJReader> handReader = vtkSmartPointer<vtkOBJReader>::New();
	handReader->SetFileName(readerhand.c_str());
	handReader->Update();
	vtkSmartPointer<vtkPolyDataMapper> handMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
	handMapper->SetInputConnection(handReader->GetOutputPort());
	vtkActor * vol = vtkActor::New();
	vol->SetMapper(handMapper);
	vol->SetPosition(x, y, z);
	vol->SetScale(1, 0.3, 0.3);
	vol->GetProperty()->SetColor(1, 1, 0);
	addObstacle(x + 10, x - 10, z + 32, z - 32);
	vol->RotateY(90);
	//vol->SetScale(2, 3, 4);

	return vol;
}


vtkActor * importerVolant(std::string readerhand)
{
	vtkSmartPointer<vtkOBJReader> handReader = vtkSmartPointer<vtkOBJReader>::New();
	handReader->SetFileName(readerhand.c_str());
	handReader->Update();
	vtkSmartPointer<vtkPolyDataMapper> handMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
	handMapper->SetInputConnection(handReader->GetOutputPort());
	vtkActor * vol = vtkActor::New();
	vol->SetMapper(handMapper);

	vol->SetPosition(0, -4, 10980); cptx = 0; cpty = -4; cptz = 10980;
	vol->SetScale(0.2, 0.1, 0.18);
	return vol;
}

vtkActor * importerVoiture(std::string voiture)
{
	vtkSmartPointer<vtkOBJReader> Reader = vtkSmartPointer<vtkOBJReader>::New();
	Reader->SetFileName(voiture.c_str());
	Reader->Update();
	vtkSmartPointer<vtkPolyDataMapper> handMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
	handMapper->SetInputConnection(Reader->GetOutputPort());
	vtkActor * voi = vtkActor::New();
	voi->SetMapper(handMapper);

	voi->SetPosition(0, -9, 10974); cptx_voi = 0; cpty_voi = -9; cptz_voi = 10974;
	voi->SetScale(1.2, 1.3, 1);
	voi->RotateZ(5);
	voi->GetProperty()->SetColor(0.0, 0.0, 0.0);
	return voi;
}


void showGameOver()
{
	std::string inputFilename = ("Assets/black.png");

	vtkSmartPointer<vtkPNGReader> pngReader =
		vtkSmartPointer<vtkPNGReader>::New();

	if (!pngReader->CanReadFile(inputFilename.c_str()))
	{
		std::cout << "Error: cannot read " << inputFilename << std::endl;
	}

	vtkSmartPointer<vtkImageMapper> mapper =
		vtkSmartPointer<vtkImageMapper>::New();
	mapper->SetInputData(pngReader->GetOutput());
	mapper->SetColorWindow(255); // width of the color range to map to
	mapper->SetColorLevel(127.5); // center of the color range to map to


	vtkActor2D* imageActor =
		vtkActor2D::New();

	imageActor->SetMapper(mapper);

	imageActor->SetPosition(10, 10);
	renderer->AddActor2D(imageActor);
	//imageActor->SetInputData(pngReader->GetOutput());

}

vtkSmartPointer<vtkCamera> initCamera()
{
	camera =
		vtkSmartPointer<vtkCamera>::New();
	camera->SetPosition(0, 0, 11000);
	camx = 0; camy = 0; camz = 11000;
	camera->SetFocalPoint(0, 0, 0);
	return camera;
}






bool actorImported(vtkSmartPointer<vtkActor> actor, std::vector<vtkSmartPointer<vtkActor>> previousActors)
{
	for (unsigned int i = 0; i < previousActors.size(); i++)
	{
		vtkSmartPointer<vtkActor> actor1 = previousActors.at(i);
		if (actor1 == actor)
		{
			return true;
		}
	}
	return false;
}





void importerScene(int times)
{
	std::vector<vtkSmartPointer<vtkActor>> previousActors;
	for (int i = 0; i < times; i++)
	{
		std::string filenameOBJ = ("Assets/route.obj");
		std::string filenameMTL = ("Assets/route.mtl");

		vtkSmartPointer<vtkOBJImporter> importer = vtkSmartPointer<vtkOBJImporter>::New();
		importer->SetFileName(filenameOBJ.data());
		importer->SetFileNameMTL(filenameMTL.data());

		renderWindow->AddRenderer(renderer);
		importer->SetRenderWindow(renderWindow);
		importer->Update();

		vtkSmartPointer<vtkActorCollection> actors = renderer->GetActors();
		actors->InitTraversal();
		vtkSmartPointer<vtkActor> actor = actors->GetNextActor();

		while (actor != NULL)
		{
			if (!actorImported(actor, previousActors))
			{
				actor->RotateY(0);
				actor->SetPosition(10, -10, 10940 + i * 80);
				//actor->SetScale(10, 10, 10);
				previousActors.push_back(actor);
			}
			actor = actors->GetNextActor();
		}
	}
}

void afficherLeTout()
{
	vtkSmartPointer<MouseInteractorStyle6> style = vtkSmartPointer<MouseInteractorStyle6>::New();
	renderWindow->SetSize(800, 600);
	renderer->SetBackground(0.529, 0.8, 0.9);
	renderWindow->Render();
	renderWindowInteractor->SetInteractorStyle(style);
	renderWindowInteractor->Start();
}








int main(int argc, char* argv[])
{
	vtkSmartPointer<MouseInteractorStyle6> style = vtkSmartPointer<MouseInteractorStyle6>::New();

	initRenderers();
	//showScore();
	vtkActor * volant = importerVolant("Assets/leBon1.obj");
	vtkActor * voit = importerVoiture("Assets/MaVoiture.obj");
	vtkActor * obs1 = importerObstacle("Assets/cone_obj.obj", -50, -10, 10700);
	vtkActor * obs2 = importerObstacle("Assets/cone_obj.obj", -80, -10, 10780);
	vtkActor * obs3 = importerObstacle("Assets/cone_obj.obj", 50, -10, 10820);
	vtkActor * obs4 = importerObstacle("Assets/cone_obj.obj", -60, -10, 10740);
	vtkActor * obs5 = importerObstacle("Assets/cone_obj.obj", 40, -10, 10710);
	vtkActor * obs6 = importerObstacle("Assets/cone_obj.obj", -60, -10, 10660);
	vtkActor * obs7 = importerObstacle("Assets/cone_obj.obj", 80, -10, 10600);
	vtkActor * obs8 = importerObstacle("Assets/cone_obj.obj", 0, -10, 10550);
	vtkActor * obs9 = importerObstacle("Assets/cone_obj.obj", -30, -10, 10500);
	vtkActor * obs10 = importerObstacle("Assets/cone_obj.obj", 50, -10, 10450);
	vtkActor * obs11 = importerObstacle("Assets/cone_obj.obj", -50, -10, 10450);
	vtkActor * obs12 = importerObstacle("Assets/cone_obj.obj", -70, -10, 10400);
	vtkActor * obs13 = importerObstacle("Assets/cone_obj.obj", 90, -10, 10350);


	//vtkActor * obs2 = importerObstacle("Assets/cube.obj", 0, -10, -10);

	//obs2->RotateY(90);
	vollant = volant;
	voiture = voit;
	style->Volant = vollant;
	style->Voiture = voiture;

	camera = initCamera();
	style->Camera = camera;

	renderer->SetActiveCamera(camera);
	importerScene(1);
	renderer->AddActor(volant);
	renderer->AddActor(voiture);
	renderer->AddActor(obs1);
	renderer->AddActor(obs2);
	renderer->AddActor(obs3);
	renderer->AddActor(obs4);
	renderer->AddActor(obs5);
	renderer->AddActor(obs6);
	renderer->AddActor(obs7);
	renderer->AddActor(obs8);
	renderer->AddActor(obs9);
	renderer->AddActor(obs10);
	renderer->AddActor(obs11);
	renderer->AddActor(obs12);
	renderer->AddActor(obs13);
	afficherLeTout();
	renderer->SetBackground(0.529, 0.8, 0.9);

	return 0;
}