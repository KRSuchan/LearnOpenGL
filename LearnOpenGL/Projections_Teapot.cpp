//#include <glut.h>
//#include <GL/gl.h>
//#include <GL/glu.h>
//void MyDisplay() 
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	// 시점 지정
//	gluLookAt(0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//	glColor3f(1.0, 1.0, 0.0);
//	glutWireTeapot(0.5);
//	glFlush();
//}
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(700, 700);
//	glutCreateWindow("OpenGL Example");
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	//glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 0.8);
//	//glFrustum(-0.2, 0.2, -0.2, 0.2, 0.1, 10.0);
//	gluPerspective(150, 1, 0.1, 10.0);
//	glutDisplayFunc(MyDisplay);
//	glutMainLoop();
//	return 0;
//}