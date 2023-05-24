#include <glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>
#include <BunnyModel.h>

// ±¤¿ø À§Ä¡
GLfloat light_position[] = { 0.0, 0.0, 3.0, 0.0 }; //1
//GLfloat light_position[] = { 3.0, 0.0, 0.0, 0.0 }; //2
//GLfloat light_position[] = { 0.0, 3.0, 0.0, 0.0 }; //3

// ±¤¿ø »ö»ó
//GLfloat light_diffuse[] = { 1.0, 0.0, 0.0, 1.0 }; // R
//GLfloat light_diffuse[] = { 1.0, 1.0, 0.0, 1.0 }; // Y
GLfloat light_diffuse[] = { 0.0, 1.0, 0.0, 1.0 }; // G


void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glutSolidTeapot(0.5);
	glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(700, 700);
	glutCreateWindow("OpenGL Example");
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, 0.0, 30.0);

	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);

	glShadeModel(GL_FLAT);

	glutDisplayFunc(MyDisplay);

	glutMainLoop();
	return 0;
}
