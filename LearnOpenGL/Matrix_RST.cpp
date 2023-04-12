/*
#include <glut.h>                    
#include <GL/gl.h>                        
#include <GL/glu.h>    
#include <stdio.h>
#include <math.h>

double a = 1.0;
double b = 0.0;
double c = 0.0;
double d = 1.0;
double t1 = 0.0;
double t2 = 0.0;
double scale = 1.0;
double theta = 0.0;

void updateMatrix(void)
{
	double rTheta = theta * 3.141592 / 180.0;
	a = scale * cos(rTheta);
	b = -scale * sin(rTheta);
	c = -b;
	d = a;
}

void transform(double* x, double* y)
{
	double ix = *x;
	double iy = *y;

	*x = a * ix + b * iy + t1;
	*y = c * iy + d * iy + t2;
}

void MyDisplay()
{
	double x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	// Axis
	glLineWidth(2);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);

	x = -0.1; y = -0.1; transform(&x, &y); glVertex2f(x, y);
	x = -0.1; y = 0.1; transform(&x, &y); glVertex2f(x, y);
	x = 0.1; y = 0.1; transform(&x, &y); glVertex2f(x, y);
	x = 0.1; y = -0.1; transform(&x, &y); glVertex2f(x, y);

	glEnd();
	glFlush();
}

void MyKeyboard(unsigned char KeyPressed, int X, int Y)
{
	switch (KeyPressed) {
	case 'Q': case 'q':
		exit(0); break;
	case 'R': 
		theta += 1.0;
		break;
	case 'r':
		theta -= 1.0;
		break;
	case 'S':
		scale += 1.0;
		break;
	case 's':
		scale -= 1.0;
		break;
	case 'X':
		t1 += 0.1;
		break;
	case 'x':
		t1 -= 0.1;
		break;
	case 'Y':
		t2 += 0.1;
		break;
	case 'y':
		t2 -= 0.1;
		break;
	}
	printf("%d\n", KeyPressed);

	updateMatrix();
	glutPostRedisplay();
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(700, 700);
	glutCreateWindow("OpenGL Example");

	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);

	glutMainLoop();
	return 0;
}
*/