//
//#include <glut.h>
//#include <GL/gl.h>
//#include <GL/glu.h>
//#include <stdio.h>
//#include <BunnyModel.h>
//
//void MyDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glLoadIdentity();
//	
//	glBegin(GL_POLYGON);
//
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glVertex3f(-0.5f, 0.5f, 0.0f);
//	glVertex3f(0.5f, 0.5f, 0.0f);
//	//glVertex3f(-0.5f, -0.5f, 0.0);
//	glVertex3f(0.5f, -0.5f, 0.0f);
//
//	glEnd();
//
//	glBegin(GL_POLYGON);
//	
//	glColor3f(0.0f, 0.0f, 1.0f);
//	glVertex3f(-0.5f, 0.5f, 0.0f);
//	glVertex3f(-0.5f, -0.5f, 0.0f);
//	glVertex3f(0.5f, -0.5f, 0.0f);
//
//	glEnd();
//
//	glFlush();
//}
//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(700, 700);
//	glutCreateWindow("OpenGL Example");
//	
//	glEnable(GL_CULL_FACE);
//	// GL_CW = Clock Wise : 시계방향이 앞면, GL_CCW = Counter Clock Wise : 반시계방향이 뒷면
//	// glFrontFace(GL_CW);
//
//	glutDisplayFunc(MyDisplay);
//
//	glutMainLoop();
//	return 0;
//}
