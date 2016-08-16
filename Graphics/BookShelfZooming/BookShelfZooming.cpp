//top shelf = first shelf
//bottom shelf = fifth shelf


#include <stdlib.h>
#include <glut.h>
#include <iostream>

using namespace std;

float xmove = 0;
float xbigger = 0;
float ybigger = 0; 

void keyStroke(unsigned char key, int x, int y)
{
	if (key == 116)
	{
		xmove = xmove + 10; 
		if (xmove >= 75)
		{
			xmove = 75;
		}
		
	}
	else if (key == 122)
	{
		xbigger = xbigger + 1;
		ybigger = ybigger + 1;

		if (ybigger >= 2.5)
		{
			ybigger = 2.5;

		}
		if (xbigger >= 36)
		{
			xbigger = 36;
		}
		cout << xbigger << endl;
	}
	
	glutPostRedisplay();
}

void init(float r, float g, float b)
{
	glClearColor(r, g, b, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 250, 0, 250);
}

//fifth shelf bookname
void booknames()
{
	glPushMatrix();
	glTranslatef(12 + xmove, 16, 0);
	glScalef(0.06, 0.06, 0.06);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[4] = "c++";
	for (int i = 0; i < 3; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
//fourth shelf of booknames-------------------------------------------------------------
void booknames41()
{
	glPushMatrix();
	glTranslatef(12, 58, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[3] = "c#";
	for (int i = 0; i < 2; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames42()
{
	glPushMatrix();
	glTranslatef(22, 57, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[5] = "java";
	for (int i = 0; i < 4; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames43()
{
	glPushMatrix();
	glTranslatef(31, 53, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[7] = "python";
	for (int i = 0; i < 6; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames44()
{
	glPushMatrix();
	glTranslatef(42, 50, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[9] = "graphics";
	for (int i = 0; i < 8; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames45()
{
	glPushMatrix();
	glTranslatef(52, 50, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[9] = "database";
	for (int i = 0; i < 8; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}


//Thrids shelf of booknames------------------------------------------------------------


void booknames31()
{
	glPushMatrix();
	glTranslatef(12, 93, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[5] = "math";
	for (int i = 0; i < 4; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames32()
{
	glPushMatrix();
	glTranslatef(22, 89, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[9] = "engineer";
	for (int i = 0; i < 8; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames33()
{
	glPushMatrix();
	glTranslatef(32, 87, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[10] = "computers";
	for (int i = 0; i < 9; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames34()
{
	glPushMatrix();
	glTranslatef(42, 89, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[9] = "software";
	for (int i = 0; i < 8; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}

//second shelf of books---------------------------------------------------------

void booknames21()
{
	glPushMatrix();
	glTranslatef(12, 130, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[8] = "english";
	for (int i = 0; i < 7; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames22()
{
	glPushMatrix();
	glTranslatef(21, 128, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[8] = "program";
	for (int i = 0; i < 7; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames23()
{
	glPushMatrix();
	glTranslatef(32, 133, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[6] = "loops";
	for (int i = 0; i < 5; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames24()
{
	glPushMatrix();
	glTranslatef(42, 131, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[7] = "arrays";
	for (int i = 0; i < 6; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
//-------------------------------------------------------------------
//First shelf of booknames

void booknames11()
{
	glPushMatrix();
	glTranslatef(12, 170, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[8] = "spanish";
	for (int i = 0; i < 7; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames12()
{
	glPushMatrix();
	glTranslatef(22, 170, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[7] = "french";
	for (int i = 0; i < 6; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames13()
{
	glPushMatrix();
	glTranslatef(32, 168, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[8] = "chinese";
	for (int i = 0; i < 7; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
}
void booknames14()
{
	glPushMatrix();
	glTranslatef(43, 170, 0);
	glScalef(0.05, 0.05, 0.05);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	char name[8] = "italian";
	for (int i = 0; i < 7; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);

	}
	glPopMatrix();
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
	glColor3f(0.9, 0.8, 0.0);
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
	glColor3f(0.0, 0.7, 0.6);
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
	glColor3f(0.5, 1.0, 0.7);
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
	glColor3f(0.2, 0.2, 0.8);
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

	glColor3f(0.1, 0.8, 0.0);
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
	glColor3f(1.0, 0.7, 1.0);
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
	glColor3f(0.8, 0.0, 0.1);
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
	glColor3f(0.2, 0.6, 0.4);
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
	glColor3f(1.0, 0.0, 1.0);
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
	glColor3f(0.9, 0.9, 0.9);
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
	glColor3f(0.0, 0.8, 0.3);
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
	glColor3f(0.9, 0.0, 0.0);
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

	glColor3f(0.9, 0.0, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(46, 81 + ybigger);  // top left
	glVertex2i(46, 45);  // bototom left
	glVertex2i(54 + xbigger, 45);  // bottom right
	glVertex2i(54 + xbigger, 81 + ybigger);  // top right
	glEnd();

	
	glColor3f(0.0, 0.8, 0.5);
	glBegin(GL_QUADS);
	glVertex2i(6 + xmove, 42);  // top left
	glVertex2i(6 + xmove, 6);  // bototom left
	glVertex2i(14 + xmove, 6);  // bottom right
	glVertex2i(14 + xmove, 42);  // top right
	glEnd();
	



	booknames();
	booknames41();
	booknames42();
	booknames43();
	booknames44();
	booknames45();
	booknames31();
	booknames32();
	booknames33();
	booknames34();
	booknames21();
	booknames22();
	booknames23();
	booknames24();
	booknames11();
	booknames12();
	booknames13();
	booknames14();
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
	glutKeyboardFunc(keyStroke);
	glutMainLoop();

}