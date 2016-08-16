#include <stdlib.h>
#include <glut.h>
#include <iostream>

using namespace std;

void init(float r, float g, float b)
{
	glClearColor(r, g, b, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 100, 0, 100);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(5, 5);
	glVertex2i(10, 10);

	glEnd();

	glFlush();

}

int main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Chris's Glut");
	init(0.0, 0.0, 0.0);
	glutDisplayFunc(display);
	glutMainLoop();
}