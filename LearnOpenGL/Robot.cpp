// 시점 조정 - gluLookAt(3,3,3,0,0,0,0,1,0);
#include <glut.h>
#include <GL/gl.h>
#include <GL/glu.h>

void drawLeftArm();
void drawRightArm();
void drawLeftLeg();
void drawRightLeg();
void drawHead();
void drawBody();
void MyDisplay();

void MyKeyboard(unsigned char KeyPressed, int X, int Y)
{
	switch (KeyPressed) {
	case 'Q': case 'q':
		exit(0); break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(700, 700);
	glutCreateWindow("OpenGL Example");

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.0, 10.0, -10.0, 10.0, -20.0, 20.0);

	glClearColor(0.5, 0.5, 0.5, 0.0);

	glEnable(GL_DEPTH_TEST);

	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);
	glutMainLoop();
	return 0;
}
void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	// Test Enable or Disable
	// 카메라 셋팅(시점조절관련 간단히 타이핑해볼것).
	gluLookAt(3, 3, 3, 0, 0, 0, 0, 1, 0);
	
	// Axis
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f); glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(5.0f, 0.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(0.0f, 5.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(0.0f, 0.0f, 5.0f);
	glEnd();
	// 몸통
	drawBody();
	// 머리
	drawHead();
	// 팔
	drawLeftArm();
	drawRightArm();
	// 다리
	drawLeftLeg();
	drawRightLeg();
	glFlush();
}
void drawHead()
{
	glPushMatrix();
		glColor3f(1.0, 0.0, 0.0);
		glTranslatef(0.0, 2.8, 0.0);
		glRotatef(-90, 0.0, 1.0, 0.0);
;		glutSolidTeapot(0.8);
	glPopMatrix();
}
void drawBody()
{
	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(0.0, 1.0, 0.0);
		glScalef(2.0, 2.0, 1.0);
		glutSolidCube(1.0);
	glPopMatrix();
}
void drawLeftArm()
{
	glPushMatrix();
		glColor3f(1.0, 1.0, 0.0);
		glTranslatef(-1.5, 1.0, 0.0);
		glScalef(0.5, 2.0, 0.5);
		glutSolidCube(1.0);
	glPopMatrix();
	glPushMatrix();
		glColor3f(0.0, 0.0, 0.0);
		glTranslatef(-1.5, -0.3, 0.0);
		glScalef(0.3, 0.3, 0.3);
		glutSolidSphere(1.0, 12, 12);
	glPopMatrix();
}
void drawRightArm()
{
	glPushMatrix();
		glColor3f(0.0, 1.0, 0.0);
		glTranslatef(1.5, 1.0, 0.0);
		glScalef(0.5, 2.0, 0.5);
		glutSolidCube(1.0);
	glPopMatrix();
	glPushMatrix();
		glColor3f(0.0, 0.0, 0.0);
		glTranslatef(1.5, -0.3, 0.0);
		glScalef(0.3, 0.3, 0.3);
		glutSolidSphere(1.0, 12, 12);
	glPopMatrix();
}
void drawLeftLeg()
{
	glPushMatrix();
		glColor3f(0.0, 1.0, 1.0);
		glTranslatef(-0.5, -2.0, 0.0);
		glScalef(0.6, 4.0, 0.8);
		glutSolidCube(1.0);
	glPopMatrix();
	glPushMatrix();
		glColor3f(0.0, 0.0, 0.0);
		glTranslatef(-0.5, -4.3, 0.3);
		glScalef(0.6, 0.5, 1.3);
		glutSolidCube(1.0);
	glPopMatrix();
}
void drawRightLeg()
{
	glPushMatrix();
		glColor3f(0.0, 1.0, 1.0);
		glTranslatef(0.5, -2.0, 0.0);
		glScalef(0.6, 4.0, 0.8);
		glutSolidCube(1.0);
	glPopMatrix();
	glPushMatrix();
		glColor3f(0.0, 0.0, 0.0);
		glTranslatef(0.5, -4.3, 0.3);
		glScalef(0.6, 0.5, 1.3);
		glutSolidCube(1.0);
	glPopMatrix();
}
