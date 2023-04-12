#include <glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>

GLint xValue = 0;
GLint yValue = 0;
GLint zValue = 0;

GLint clickDown = 0;
GLint fixX = 0;
GLint fixY = 0;

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glRotatef(xValue, 1.0, 0.0, 0.0);
	glRotatef(yValue, 0.0, 1.0, 0.0);
	glRotatef(zValue, 0.0, 0.0, 1.0);

	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex3f(-1, 0, 0);	glVertex3f(1, 0, 0); // X axis
	glColor3f(0, 1, 0);
	glVertex3f(0, -1, 0);	glVertex3f(0, 1, 0); // Y axis
	glColor3f(0, 0, 1);
	glVertex3f(0, 0, -1);	glVertex3f(0, 0, 1); // Z axis
	glEnd();

	glPushMatrix();
		glColor3f(1, 0, 0);
		glTranslatef(0.1, 0.0, 0);
		glutSolidCube(0.2);
			glPushMatrix();
			glColor3f(0, 0, 1);
			glTranslatef(0.2, 0.0, 0);
			glutSolidCube(0.2);
				glPushMatrix();
				glColor3f(1.0, 1.0, 0);
				glTranslatef(0, 0.1, 0);
				glRotatef(-90, 1, 0, 0);
				glutSolidCone(0.1, 0.2, 12, 12);
				glPopMatrix();
			glPopMatrix();
		glPopMatrix();
	glPopMatrix();
		glPushMatrix();
		glColor3f(1, 0, 0);
		glTranslatef(-0.1, 0.0, 0);
		glutSolidCube(0.2);
			glPushMatrix();
			glColor3f(0, 0, 1);
			glTranslatef(-0.2, 0.0, 0);
			glutSolidCube(0.2);
				glPushMatrix();
				glColor3f(1.0, 1.0, 0);
				glTranslatef(0, 0.1, 0);
				glRotatef(-90, 1, 0, 0);
				glutSolidCone(0.1, 0.2, 12, 12);
				glPopMatrix();
			glPopMatrix();
		glPopMatrix();
	glPopMatrix();

	glFlush();
}

void MyKeyboard(unsigned char KeyPressed, int X, int Y)
{
	switch (KeyPressed) {
	case 'X':
	case 'x':    xValue += 1;
		break;
	case 'Y':
	case 'y':    yValue += 1;
		break;
	case 'Z':
	case 'z':    zValue += 1;
		break;
	case 'Q':
	case 'q':
		exit(0); break;
	case 32: // SPACE key
		xValue = 0;
		yValue = 0;
		zValue = 0;
		break;
	}
	printf("%d\n", KeyPressed);
	glutPostRedisplay();
}

void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y)
{
	if (Button == GLUT_LEFT_BUTTON && State == GLUT_DOWN) {
		fixX = X;
		fixY = Y;
		clickDown = 1;
	}

	if (Button == GLUT_LEFT_BUTTON && State == GLUT_UP) {
		clickDown = 0;
	}
}

void MyMouseMove(GLint X, GLint Y)
{
	if (clickDown == 1) {
		xValue = xValue + (fixX - X);
		yValue = yValue + (fixY - Y);
		fixX = X;
		fixY = Y;
	}

	glutPostRedisplay();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(700, 700);

	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
	//glutInitDisplayMode(GLUT_RGB);
	
	glutCreateWindow("OpenGL Example");
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	
	glEnable(GL_DEPTH_TEST);

	glMatrixMode(GL_PROJECTION); // ���� ����
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	
	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);
	glutMouseFunc(MyMouseClick);
	glutMotionFunc(MyMouseMove);
	
	glutMainLoop();
	return 0;
}
