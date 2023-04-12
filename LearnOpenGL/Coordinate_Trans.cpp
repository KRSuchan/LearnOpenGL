/*
#include <glut.h>
#include <GL/gl.h>
#include <GL/glu.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex3f(-1, 0, 0);	glVertex3f(1, 0, 0); // X axis
	glColor3f(0, 1, 0);
	glVertex3f(0, -1, 0);	glVertex3f(0, 1, 0); // Y axis
	glColor3f(0, 0, 1);
	glVertex3f(0, 0, -1);	glVertex3f(0, 0, 1); // Z axis
	glEnd();

	glScalef(2.0, 2.0, 1.0);
	glTranslatef(0.5, 0.0, 0.0);
	glRotatef(45.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.6f, 0.6f, 1.0f);
	glVertex3f(-0.1, -0.1, 0.0);
	glVertex3f(0.1, -0.1, 0.0);
	glVertex3f(0.1, 0.1, 0.0);
	glVertex3f(-0.1, 0.1, 0.0);

	glEnd();

	glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(700, 700);
	glutCreateWindow("OpenGL Example");
	glClearColor(1, 1, 1, 0);
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}
*/