//
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
//GLint xValue = 0;
//GLint yValue = 0;
//GLint zValue = 0;
//
//GLint clickDown = 0;
//GLint fixX = 0;
//GLint fixY = 0;
//GLint fixZ = 0;
//
//// 광원 위치
//GLfloat light0pos[] = { 0.0, 0.0, 3.0, 0.0 }; //1
//
//// 0번 광원 확산광
//GLfloat light0diffuse[] = { 1.0, 1.0, 0.0, 1.0 }; // G
//
////0번 광원 주변광 특성 (붉은색 - 주변 환경에 의한 산란된 빛)
//GLfloat light0ambient[] = { 1.0, 0.0, 0.0, 1.0 };
//
////0번 광원 반사광 특성 (파란색)
//GLfloat light0specular[] = { 0.0, 0.0, 1.0, 1.0 };
//
//GLint GenerateCallList()
//{
//	GLint lid = glGenLists(1);
//
//	glNewList(lid, GL_COMPILE);
//	glColor3f(1.0f, 1.0f, 0.0f);
//
//	unsigned int i;
//	for (i = 0; i < (sizeof(face_indicies) / sizeof(face_indicies[0])); i++)
//	{
//		int vi;
//		int ni;
//		glBegin(GL_POLYGON);
//		vi = face_indicies[i][0];
//		ni = face_indicies[i][3];
//		glNormal3fv(normals[ni]);
//		glVertex3fv(vertices[vi]);
//		vi = face_indicies[i][1];
//		ni = face_indicies[i][4];
//		glNormal3fv(normals[ni]);
//		glVertex3fv(vertices[vi]);
//		vi = face_indicies[i][2];
//		ni = face_indicies[i][5];
//		glNormal3fv(normals[ni]);
//		glVertex3fv(vertices[vi]);
//		glEnd();
//	}
//	glEndList();
//
//	return lid;
//}
//
//void MyDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(0.0, 0.0, 2.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//
//	// 위치에 따라서 좌표축도 회전함
//	glRotatef(xValue, 1.0, 0.0, 0.0);
//	glRotatef(yValue, 0.0, 1.0, 0.0);
//	glRotatef(zValue, 0.0, 0.0, 1.0);
//
//	// Axis
//	glLineWidth(2);
//	glBegin(GL_LINES);
//	glColor3f(1.0f, 0.0f, 0.0f);	glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(1.0f, 0.0f, 0.0f);
//	glColor3f(0.0f, 1.0f, 0.0f);	glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(0.0f, 1.0f, 0.0f);
//	glColor3f(0.0f, 0.0f, 1.0f);	glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(0.0f, 0.0f, 1.0f);
//	glEnd();
//
//	// Light Position
//
//	glPushMatrix();
//	glColor3f(1.0, 1.0, 0.0);
//	glTranslatef(light0pos[0], light0pos[1], light0pos[2]);
//	glutSolidSphere(0.1, 36, 36);
//	glPopMatrix();
//
//	glLightfv(GL_LIGHT0, GL_POSITION, light0pos);
//
//	// display Call Lists
//	glEnable(GL_LIGHTING);
//	glCallList(g_stanfordBunnyID);
//	glDisable(GL_LIGHTING);
//	//glColor3f(1.0, 1.0, 1.0);
//	//glutSolidTeapot(0.5);
//
//	glFlush();
//}
//
//void MyKeyboard(unsigned char KeyPressed, int X, int Y)
//{
//	switch (KeyPressed) {
//	case 'X':
//	case 'x':    xValue += 1;
//		break;
//	case 'Y':
//	case 'y':    yValue += 1;
//		break;
//	case 'Z':
//	case 'z':    zValue += 1;
//		break;
//	case 'Q':
//	case 'q':
//		exit(0); break;
//	case 32: // SPACE key
//		xValue = 0;
//		yValue = 0;
//		zValue = 0;
//		break;
//	}
//	printf("%d\n", KeyPressed);
//	glutPostRedisplay();
//}
//
//void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y)
//{
//	if (Button == GLUT_LEFT_BUTTON && State == GLUT_DOWN) {
//		fixZ = X;
//		fixY = Y;
//		clickDown = 1;
//	}
//
//	if (Button == GLUT_LEFT_BUTTON && State == GLUT_UP) {
//		clickDown = 0;
//	}
//}
//
//void MyMouseMove(GLint X, GLint Y)
//{
//	if (clickDown == 1) {
//		xValue = xValue + (fixX - X);
//		yValue = yValue + (fixY - Y);
//		fixX = X;
//		fixY = Y;
//	}
//
//	glutPostRedisplay();
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH);
//	glutInitWindowSize(700, 700);
//	glutCreateWindow("OpenGL Example");
//
//	g_stanfordBunnyID = GenerateCallList();
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45, 1.0, 0.1, 30);
//
//	glEnable(GL_DEPTH_TEST);
//
//	glEnable(GL_LIGHT0);
//
//	glLightfv(GL_LIGHT0, GL_DIFFUSE, light0diffuse);
//	glLightfv(GL_LIGHT0, GL_AMBIENT, light0ambient);
//	glLightfv(GL_LIGHT0, GL_SPECULAR, light0specular);
//
//	glShadeModel(GL_SMOOTH);
//
//	glutDisplayFunc(MyDisplay);
//
//	glutKeyboardFunc(MyKeyboard);
//	glutMouseFunc(MyMouseClick);
//	glutMotionFunc(MyMouseMove);
//
//	glutMainLoop();
//	return 0;
//}
