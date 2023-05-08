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
//	glFlush();
//}
//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB);
//	glutInitWindowSize(700, 700);
//	glutCreateWindow("OpenGL Example");
//	glutDisplayFunc(MyDisplay);
//
//	glutMainLoop();
//	return 0;
//}