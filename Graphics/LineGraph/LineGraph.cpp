#include <stdlib.h>
#include <glut.h>
#include <iostream>

using namespace std;

int linewidth = 1;
int xRaster = 10, yRaster = 20;

GLubyte xAxis[22] = {
	' ', '0',
	' ', '1',
	' ', '2',
	' ', '3',
	' ', '4',
	' ', '5',
	' ', '6',
	' ', '7',
	' ', '8',
	' ', '9',
	'1', '0'
};

GLubyte yAxis[30] = {
	'5', '0', ' ',
	'1', '0', '0',
	'1', '5', '0',
	'2', '0', '0',
	'2', '5', '0',
	'3', '0', '0',
	'3', '5', '0',
	'4', '0', '0',
	'4', '5', '0',
	'5', '0', '0'
};

GLint Line1[10] = {
318, 324, 315, 282, 157, 219, 236, 184, 249, 446
};

GLint Line2[10] = {
420, 342, 324, 310, 262, 185, 190, 196, 217, 240
};

GLint Line3[10] = {
210, 208, 218, 237, 267, 272, 290, 350, 383, 422
};

void init(float r, float g, float b)
{
	glClearColor(r, g, b, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 900, 0, 600);
}


void x_Axis()
{
	xRaster = 10, yRaster = 20;
	glColor3f(0.0, 0.0, 0.0);
	GLint xScale, k;
	for (xScale = 0; xScale < 11; xScale++)
	{
		glRasterPos2i(xRaster, yRaster);
		for (k = 2 * xScale; k < 2 * xScale + 2; k++)
		{
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, xAxis[k]);
		}
		xRaster = xRaster + 65; 
	}
}


void y_Axis()
{
	xRaster = 10, yRaster = 75;
	glColor3f(0.0, 0.0, 0.0);
	GLint yScale, k;
	for (yScale = 0; yScale < 10; yScale++)
	{
		glRasterPos2i(xRaster, yRaster);
		for (k = 3 * yScale; k < 3 * yScale + 3; k++)
		{
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, yAxis[k]);
		}
		yRaster = yRaster + 50;
	}
}

void Grid()
{
	glLineWidth(1);
	xRaster = 40, yRaster = 80;
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	for (int i = 0; i < 10; i++)
	{
		glVertex2i(xRaster, yRaster);
		glVertex2i(xRaster + 640, yRaster);
		yRaster = yRaster + 50;
	}
	glEnd(); 
}

void Legend()
{
	char line1[6] = "line1";
	char line2[6] = "line2";
	char line3[6] = "line3";
	xRaster = 785, yRaster = 300;

	
	glBegin(GL_LINES);
	
		glColor3f(0.0,0.0,1.0);
		glVertex2i(xRaster, yRaster);
		glVertex2i(xRaster + 50, yRaster);

		glColor3f(0.0, 1.0, 0.0);
		glVertex2i(xRaster, yRaster - 20);
		glVertex2i(xRaster + 50, yRaster - 20);

		glColor3f(1.0, 0.0, 0.0);
		glVertex2i(xRaster, yRaster - 40);
		glVertex2i(xRaster + 50, yRaster - 40);

	glEnd();

	xRaster = 750, yRaster = 275;
	glColor3f(0.0, 0.0, 1.0);
	glRasterPos2i(xRaster, yRaster + 20);
	
	for (int i = 0; i < 5; i++)
	{
		
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line1[i]);
	}
	glColor3f(0.0, 1.0, 0.0);
	glRasterPos2i(xRaster, yRaster);
	//glColor3f(0.0, 1.0, 0.0);
	for (int i = 0; i < 5; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line2[i]);
	}

	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(xRaster, yRaster - 20);
	for (int i = 0; i < 5; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line3[i]);
	}
	
}

void lineGraph(void)
{
	GLint a, b, c, k;
	GLint x = 90;

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);
	
	glLineWidth(linewidth);

	glBegin(GL_LINE_STRIP);
	for (a = 0; a < 10; a++)
		glVertex2i (x + a*65, Line1 [a] + 75);
	
	glEnd();

	
	
	xRaster = 90;

	glColor3f(0.0, 0.0, 1.0);
	for (k = 0; k < 10; k++) {
		glRasterPos2i(xRaster + k*65, Line1[k] + 71);
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '*');
		
	}

	//------------------------------------------------------------
	
	glColor3f(0.0, 1.0, 0.0);

	glBegin(GL_LINE_STRIP);
	for (a = 0; a < 10; a++)
		glVertex2i(x + a * 65, Line2[a] + 75);

	glEnd();


	xRaster = 90;

	glColor3f(0.0, 1.0, 0.0);
	for (k = 0; k < 10; k++) {
		glRasterPos2i(xRaster + k * 65, Line2[k] + 71);
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '*');

	}
	///---------------------------------------------------------------
	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_LINE_STRIP);
	for (a = 0; a < 10; a++)
		glVertex2i(x + a * 65, Line3[a] + 75);

	glEnd();



	xRaster = 90;

	glColor3f(1.0, 0.0, 0.0);
	for (k = 0; k < 10; k++) {
		glRasterPos2i(xRaster + k * 65, Line3[k] + 71);
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '*');

	}
	
	
	x_Axis();
	y_Axis();
	Legend();
	Grid();

	glFlush();




}







int main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(900, 600);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Graph");
	init(1.0, 1.0, 1.0);

	cout << "enter a line width" << endl;
	cin >> linewidth;

	glutDisplayFunc(lineGraph);

	
	

	glutMainLoop();
}