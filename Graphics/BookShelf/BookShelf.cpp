#include <stdlib.h>
#include <glut.h>
#include <iostream>

using namespace std;

void init(float r, float g, float b)
{
	glClearColor ( r, g, b, 0.0);
	glMatrixMode(GL_PROJECTION); 
	gluOrtho2D(0, 250, 0, 250);
}

void booknames()
{
	
	char name[4] = "c++";
	for (int i = 0; i < 3; i++)
	{
		
		glPushMatrix();
		glRotatef(90, 0, 0, 1);
		
		glScalef(0.5, 0.5, 1.0);
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);
	
		
		
		
		
		
		
		
	}
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);


	glColor3f(1.0, 1.0, 1.0);
	///border
	glBegin(GL_POLYGON);
	glVertex2i(5, 5);
	glVertex2i(5, 200);
	glVertex2i(5, 200);
	glVertex2i(90, 200);
	glVertex2i(90, 200);
	glVertex2i(90, 5);
	glVertex2i(90, 5);
	glVertex2i(5, 5);
	
	glEnd();
	//shelves
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(5, 44);
	glVertex2i(90, 44);
	glVertex2i(5, 83);
	glVertex2i(90, 83);
	glVertex2i(5, 122);
	glVertex2i(90, 122);
	glVertex2i(5, 161);
	glVertex2i(90, 161);
	glEnd();

	///////////////first shelf of books(1)------------------

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(6, 162);
	glVertex2i(6, 198);
	glVertex2i(6, 198);
	glVertex2i(14, 198);
	glVertex2i(14, 198);
	glVertex2i(14, 162);
	glVertex2i(14, 162);
	glVertex2i(6, 162);
	glEnd();
	//(2)
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(16, 162);
	glVertex2i(16, 198);
	glVertex2i(16, 198);
	glVertex2i(24, 198);
	glVertex2i(24, 198);
	glVertex2i(24, 162);
	glVertex2i(24, 162);
	glVertex2i(16, 162);
	glEnd();
	//(3)
	glColor3f(0.5, 0.1, 0.7);
	glBegin(GL_POLYGON);
	glVertex2i(26, 162);
	glVertex2i(26, 198);
	glVertex2i(26, 198);
	glVertex2i(34, 198);
	glVertex2i(34, 198);
	glVertex2i(34, 162);
	glVertex2i(34, 162);
	glVertex2i(26, 162);
	glEnd();
	///(4)
	glColor3f(0.3, 0.7, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(36, 162);
	glVertex2i(36, 198);
	glVertex2i(36, 198);
	glVertex2i(44, 198);
	glVertex2i(44, 198);
	glVertex2i(44, 162);
	glVertex2i(44, 162);
	glVertex2i(36, 162);
	glEnd();

	/////second shelf of books(1)--------------------------------
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(6, 123);
	glVertex2i(6, 159);
	glVertex2i(6, 159);
	glVertex2i(14, 159);
	glVertex2i(14, 159);
	glVertex2i(14, 123);
	glVertex2i(14, 123);
	glVertex2i(6, 123);
	glEnd();
	//(2)
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(16, 123);
	glVertex2i(16, 159);
	glVertex2i(16, 159);
	glVertex2i(24, 159);
	glVertex2i(24, 159);
	glVertex2i(24, 123);
	glVertex2i(24, 123);
	glVertex2i(16, 123);
	glEnd();
	//(3)
	glColor3f(0.5, 0.1, 0.7);
	glBegin(GL_POLYGON);
	glVertex2i(26, 123);
	glVertex2i(26, 159);
	glVertex2i(26, 159);
	glVertex2i(34, 159);
	glVertex2i(34, 159);
	glVertex2i(34, 123);
	glVertex2i(34, 123);
	glVertex2i(26, 123);
	glEnd();
	///(4)
	glColor3f(0.3, 0.7, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(36, 123);
	glVertex2i(36, 159);
	glVertex2i(36, 159);
	glVertex2i(44, 159);
	glVertex2i(44, 159);
	glVertex2i(44, 123);
	glVertex2i(44, 123);
	glVertex2i(36, 123);
	glEnd();

	/////Thrid shelf of books(1)-----------------------------------

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(6, 84);
	glVertex2i(6, 120);
	glVertex2i(6, 120);
	glVertex2i(14, 120);
	glVertex2i(14, 120);
	glVertex2i(14, 84);
	glVertex2i(14, 84);
	glVertex2i(6, 84);
	glEnd();
	//(2)
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(16, 84);
	glVertex2i(16, 120);
	glVertex2i(16, 120);
	glVertex2i(24, 120);
	glVertex2i(24, 120);
	glVertex2i(24, 84);
	glVertex2i(24, 84);
	glVertex2i(16, 84);
	glEnd();
	//(3)
	glColor3f(0.5, 0.1, 0.7);
	glBegin(GL_POLYGON);
	glVertex2i(26, 84);
	glVertex2i(26, 120);
	glVertex2i(26, 120);
	glVertex2i(34, 120);
	glVertex2i(34, 120);
	glVertex2i(34, 84);
	glVertex2i(34, 84);
	glVertex2i(26, 84);
	glEnd();
	///(4)
	glColor3f(0.3, 0.7, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(36, 84);
	glVertex2i(36, 120);
	glVertex2i(36, 120);
	glVertex2i(44, 120);
	glVertex2i(44, 120);
	glVertex2i(44, 84);
	glVertex2i(44, 84);
	glVertex2i(36, 84);
	glEnd();

	//////Fourth shelf of books(1)------------------------
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(6, 45);
	glVertex2i(6, 81);
	glVertex2i(6, 81);
	glVertex2i(14, 81);
	glVertex2i(14, 81);
	glVertex2i(14, 45);
	glVertex2i(14, 45);
	glVertex2i(6, 45);
	glEnd();
	//(2)
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(16, 45);
	glVertex2i(16, 81);
	glVertex2i(16, 81);
	glVertex2i(24, 81);
	glVertex2i(24, 81);
	glVertex2i(24, 45);
	glVertex2i(24, 45);
	glVertex2i(16, 45);
	glEnd();
	//(3)
	glColor3f(0.5, 0.1, 0.7);
	glBegin(GL_POLYGON);
	glVertex2i(26, 45);
	glVertex2i(26, 81);
	glVertex2i(26, 81);
	glVertex2i(34, 81);
	glVertex2i(34, 81);
	glVertex2i(34, 45);
	glVertex2i(34, 45);
	glVertex2i(26, 45);
	glEnd();
	///(4)
	glColor3f(0.3, 0.7, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(36, 45);
	glVertex2i(36, 81);
	glVertex2i(36, 81);
	glVertex2i(44, 81);
	glVertex2i(44, 81);
	glVertex2i(44, 45);
	glVertex2i(44, 45);
	glVertex2i(36, 45);
	glEnd();
	////(5)

	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_QUADS);
	glVertex2i(46, 81);  // top left
	glVertex2i(46, 45);  // bototom left
	glVertex2i(54, 45);  // bottom right
	glVertex2i(54, 81);  // top right
	glEnd();


	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_QUADS);
	glVertex2i(6, 42);  // top left
	glVertex2i(6, 6);  // bototom left
	glVertex2i(14, 6);  // bottom right
	glVertex2i(14, 42);  // top right
	glEnd();
	booknames();
	glFlush();


}

int main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("BookShelf");
	init(0.0, 0.0, 0.0);
	glutDisplayFunc(display);
	
	glutMainLoop();

}