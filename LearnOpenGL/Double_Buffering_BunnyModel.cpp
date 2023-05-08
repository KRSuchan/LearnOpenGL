//#include <glut.h>
//#include <GL/gl.h>
//#include <GL/glu.h>
//#include <stdio.h>
//#include <BunnyModel.h>
//
//int zRotate = 0;
//
//void MyDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glLoadIdentity();
//	glRotatef(zRotate, 0, 0, 1);
//
//	unsigned int i;
//	for (i = 0; i < (sizeof(face_indicies) / sizeof(face_indicies[0])); i++)
//	{
//		int vi;
//		glBegin(GL_LINES);
//		vi = face_indicies[i][0]; glVertex3fv(vertices[vi]);
//		vi = face_indicies[i][1]; glVertex3fv(vertices[vi]);
//		vi = face_indicies[i][1]; glVertex3fv(vertices[vi]);
//		vi = face_indicies[i][2]; glVertex3fv(vertices[vi]);
//		vi = face_indicies[i][2]; glVertex3fv(vertices[vi]);
//		vi = face_indicies[i][0]; glVertex3fv(vertices[vi]);
//		glEnd();
//	}
//	glutSwapBuffers();
//}
//void MyTimer(int Value)
//{
//	zRotate += 5.0;
//	glutTimerFunc(100, MyTimer, 1);
//	glutPostRedisplay();
//}
//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB | GL_DOUBLE);
//	glutCreateWindow("OpenGL Example");
//	glutDisplayFunc(MyDisplay);
//	glutTimerFunc(100, MyTimer, 1);
//
//	glutMainLoop();
//	return 0;
//}