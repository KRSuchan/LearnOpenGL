/*
#include <glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>
#include <BunnyModel.h>

int xValue = 0;
int yValue = 0;
int zValue = 0;

GLint clickDown = 0;
GLint fixX = 0;
GLint fixY = 0;

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity();

	glBegin(GL_LINES);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);

	glEnd();

	unsigned int i;
	for (i = 0; i < (sizeof(face_indicies) / sizeof(face_indicies[0])); i++)
	{
		int vi;
		glBegin(GL_LINES);
		glColor3f(1.0f, 0.0f, 0.0f);
		vi = face_indicies[i][0]; glVertex3fv(vertices[vi]);
		vi = face_indicies[i][1]; glVertex3fv(vertices[vi]);
		vi = face_indicies[i][1]; glVertex3fv(vertices[vi]);
		vi = face_indicies[i][2]; glVertex3fv(vertices[vi]);
		vi = face_indicies[i][2]; glVertex3fv(vertices[vi]);
		vi = face_indicies[i][0]; glVertex3fv(vertices[vi]);
		glEnd();
	}
	glutSwapBuffers();
}
void MyKeyboard(unsigned char KeyPressed, int X, int Y)
{
	switch (KeyPressed)
	{
	case 'x': case 'X':
		xValue += 5; break;
	case 'y': case 'Y':
		yValue += 5; break;
	case 'z': case 'Z':
		zValue += 5; break;
	case 'q': case 'Q':
		exit(0); break;
	case 32 :
		fixX - 0;
	}
}
void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y)
{
	if (Button == GLUT_LEFT_BUTTON && State == GLUT_DOWN)
	{
		fixX = X;
		fixY = Y;
		clickDown = 1;
	}
}
void MyMouseMove(GLint X, GLint Y)
{
	if (clickDown == 1)
	{
		xValue += fixX - X;
		yValue += fixY - Y;
		fixX = X;
		fixY = Y;
	}
	glutPostRedisplay();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(700, 700);
	glutCreateWindow("OpenGL Example");
	glutDisplayFunc(MyDisplay);

	glutKeyboardFunc(MyKeyboard);
	glutMouseFunc(MyMouseClick);
	glutMotionFunc(MyMouseMove);

	glutMainLoop();
	return 0;
}
*/