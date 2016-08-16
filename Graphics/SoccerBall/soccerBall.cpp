//In this program, change the light_position1 vector to see the
//change in reflected light
#include <stdlib.h>

#include <glut.h>
#include <iostream>

using namespace std;

float xmove = -10;


void keyStroke(unsigned char key, int x, int y)
{
	 if (key == 109)
	 {
	     xmove = xmove + 0.5;

		 if (xmove >= 10)
		 {
			  xmove = xmove - 0.1;
			  xmove = -10;
		 }
	 
	
		 cout << xmove << endl;
	 }
	 
	 glutPostRedisplay();
}



GLfloat mat_specular[] = { 0.5, 0.5, 0.5, 0.5 };
GLfloat mat_shininess[] = { 50.0 };//0 not shiny to 128 max shiny

// One time setup initialization
void Setup()
{
	 glClearColor(0.6, 0.6, 0.6, 0.0); // Clear background grey
	 glMatrixMode(GL_PROJECTION); // Change to projection
	 glLoadIdentity(); // Clear to identity
	 glEnable(GL_NORMALIZE); //Enable surface orientation relative to light source
	 glEnable(GL_LIGHTING); //Enable lighting
	 glEnable(GL_LIGHT0); //Turn ON the light
	 glEnable(GL_DEPTH_TEST);
	 glShadeModel(GL_SMOOTH);
	 glEnable(GL_COLOR_MATERIAL);
	 glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);//GL_SPECULAR is point reflection
	 glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	 glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
}
void Display()
{
	 GLfloat light_position1[] = { 0.0 + xmove, 1.0, 0.0, 0.0 };//diffuse light source
	 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	 glNormal3f(0.0, 0.0, 1.0);  //z-axis is up
	 glLightfv(GL_LIGHT0, GL_POSITION, light_position1); //set light at a position
	 glColor3f(0.7, 0.4, 0.2); //ORANGE color
	 glutSolidSphere(0.5, 50, 16);//glutSolidTeapot(0.5);
	 glFlush(); // Draw to the screen
	 glEnd();
	
	 

	 
}




void main(int argc, char *argv[])
{
	 glutInit(&argc, argv);
	 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	 glutInitWindowSize(800, 800);
	 glutInitWindowPosition(200, 200);
	 glutCreateWindow("Soccerball Lighting");
	 Setup();
	 glutDisplayFunc(Display);// Callback function
	 glutKeyboardFunc(keyStroke);
	 glutMainLoop();
}