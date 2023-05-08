//#include <glut.h>
//#include <GL/gl.h>
//#include <GL/glu.h>
//
//#include "BunnyModel.h"
//
//#include <stdio.h>
//
//GLuint g_stanfordBunnyID = -1;
//
//GLfloat zDistance = -1.5;
//
//GLint fixX = 0;
//GLint fixY = 0;
//
//
//void MyDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	// 시점 지정
//	gluLookAt(0.0, 0.0, zDistance, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//	// Axis
//	glLineWidth(2);
//	glBegin(GL_LINES);
//	glColor3f(1.0f, 0.0f, 0.0f);	glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(1.0f, 0.0f, 0.0f);
//	glColor3f(0.0f, 1.0f, 0.0f);	glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(0.0f, 1.0f, 0.0f);
//	glColor3f(0.0f, 0.0f, 1.0f);	glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(0.0f, 0.0f, 1.0f);
//	
//	glColor3f(1.0f, 0.0f, 0.0f);
//
//	unsigned int i;
//	for (i = 0; i < (sizeof(face_indicies) / sizeof(face_indicies[0])); i++)
//	{
//		int vi;
//		glBegin(GL_LINES);
//		vi = face_indicies[i][0];
//		glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
//		vi = face_indicies[i][1];
//		glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
//		vi = face_indicies[i][1];
//		glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
//		vi = face_indicies[i][2];
//		glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
//		vi = face_indicies[i][2];
//		glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
//		vi = face_indicies[i][0];
//		glVertex3f(vertices[vi][0], vertices[vi][1], vertices[vi][2]);
//		glEnd();
//	}
//	// display Call Lists
//	glEnd();
//	glFlush();
//}
//
//void MyKeyboard(unsigned char KeyPressed, int X, int Y)
//{
//	switch (KeyPressed) {
//	case '+':
//	case '=':	zDistance += 0.1;;
//		break;
//	case '-':
//	case '_':	zDistance -= 0.1;
//		break;
//	case 'Q':
//	case 'q':
//		exit(0); break;
//	case 32: // SPACE key
//		zDistance = 0;
//		break;
//	}
//	printf("%d\n", KeyPressed);
//	printf("zDistnance = %0.1f\n", zDistance);
//	glutPostRedisplay();
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(700, 700);
//	glutCreateWindow("OpenGL Example");
//	glMatrixMode(GL_PROJECTION);
//
//	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 0.8);
//	glutDisplayFunc(MyDisplay);
//
//	glutKeyboardFunc(MyKeyboard);
//
//	glutMainLoop();
//	return 0;
//}
