//
//// 시점 조정 - gluLookAt(3,3,3,0,0,0,0,1,0);
//#include <glut.h>
//#include <GL/gl.h>
//#include <GL/glu.h>
//#include <math.h>
//
//double time = 0;
//
//GLfloat globalRot = 0.0f;
//
//GLfloat headAngle = 0.0f;
//GLfloat armAngleL = 0.0f;
//GLfloat armAngleR = 0.0f;
//GLfloat legAngleL = 0.0f;
//GLfloat legAngleR = 0.0f;
//
//void drawLeftArm();
//void drawRightArm();
//void drawLeftLeg();
//void drawRightLeg();
//void drawHead();
//void drawBody();
//void MyDisplay();
//
//void MyTimer(int Value)
//{
//	time = time + 0.1;
//
//	globalRot += 1.0;
//	headAngle = 20 * sin(time*0.8f);
//	armAngleL = 20 * sin(time);
//	armAngleR = -20 * sin(time);
//	legAngleL = -20 * sin(time);
//	legAngleR = 20 * sin(time);
//
//	if (headAngle >= 360) headAngle -= 360;
//	if (armAngleL >= 360) armAngleL -= 360;
//	if (armAngleR >= 360) armAngleR -= 360;
//	if (legAngleL >= 360) legAngleL -= 360;
//	if (legAngleR >= 360) legAngleR -= 360;
//
//	glutPostRedisplay();
//	glutTimerFunc(20, MyTimer, 1);
//}
//void MyKeyboard(unsigned char KeyPressed, int X, int Y)
//{
//	switch (KeyPressed) {
//	case 'Q': case 'q':
//		exit(0); break;
//	}
//	glutPostRedisplay();
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
//	glutInitWindowSize(700, 700);
//	glutCreateWindow("OpenGL Example");
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-10.0, 10.0, -10.0, 10.0, -20.0, 20.0);
//
//	glClearColor(0.5, 0.5, 0.5, 0.0);
//
//	glEnable(GL_DEPTH_TEST);
//
//	glutDisplayFunc(MyDisplay);
//	glutKeyboardFunc(MyKeyboard);
//	glutTimerFunc(20, MyTimer, 1);
//	glutMainLoop();
//	return 0;
//}
//void MyDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	// Test Enable or Disable
//	// 카메라 셋팅(시점조절관련 간단히 타이핑해볼것).
//	gluLookAt(6, 6, 6, 0, 0, 0, 0, 1, 0); // 우상단
//	//gluLookAt(-3, 0, 0, 0, 0, 0, 0, 1, 0); // 우측면
//
//	// Axis
//	glBegin(GL_LINES);
//	glColor3f(1.0f, 0.0f, 0.0f); glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(5.0f, 0.0f, 0.0f);
//	glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(0.0f, 5.0f, 0.0f);
//	glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(0.0f, 0.0f, 5.0f);
//	glEnd();
//
//	// Floor
//	glBegin(GL_QUADS);
//	glColor3f(1.0f, 1.0f, 1.0f);
//	glVertex3f(8.0f, -5.0f, -8.0f);
//	glVertex3f(8.0f, -5.0f, 8.0f);
//	glVertex3f(-8.0f, -5.0f, 8.0f);
//	glVertex3f(-8.0f, -5.0f, -8.0f);
//	glEnd();
//
//	glRotatef(globalRot, 0.0f, 1.0f, 0.0f);
//	glTranslatef(-6.0f, 0.0f, 0.0f);
//
//	// 몸통
//	drawBody();
//	// 머리
//	drawHead();
//	// 팔
//	drawLeftArm();
//	drawRightArm();
//	// 다리
//	drawLeftLeg();
//	drawRightLeg();
//
//	glFlush();
//}
//void drawHead()
//{
//	glPushMatrix();
//		glColor3f(1.0, 0.0, 0.0);
//		// Transform
//		glRotatef(headAngle, 0.0f, 1.0f, 0.0f);
//
//		glTranslatef(0.0, 2.8, 0.0);
//		glRotatef(-90, 0.0, 1.0, 0.0);
//;		glutSolidTeapot(0.8);
//	glPopMatrix();
//}
//void drawBody()
//{
//	glPushMatrix();
//		glColor3f(0.0, 0.0, 1.0);
//		glTranslatef(0.0, 1.0, 0.0);
//		glScalef(2.0, 2.0, 1.0);
//		glutSolidCube(1.0);
//	glPopMatrix();
//}
//void drawRightArm()
//{
//	glPushMatrix();
//		// Transform
//		glTranslatef(-1.5f, 2.0f, 0.0f);
//		glRotatef(armAngleR, 1.0f, 0.0f, 0.0f);
//
//		// Modeling
//		glPushMatrix();
//			glColor3f(1.0, 1.0, 0.0);
//			glTranslatef(0.0f, -1.0f, 0.0f);
//			glScalef(0.5, 2.0, 0.5);
//			glutSolidCube(1.0);
//		glPopMatrix();
//
//		// Modeling
//		glPushMatrix();
//			glColor3f(0.0, 0.0, 0.0);
//			glTranslatef(0.0f, -2.3f, 0.0f);
//			glScalef(0.3, 0.3, 0.3);
//			glutSolidSphere(0.8, 18, 18);
//		glPopMatrix();
//	glPopMatrix();
//}
//void drawLeftArm()
//{
//	glPushMatrix();
//		// Left Arm Transform
//		glTranslatef(1.5f, 2.0f, 0.0f);
//		glRotatef(armAngleL, 1.0f, 0.0f, 0.0f);
//		
//		// Left Arm Modeling
//		glPushMatrix();
//			glColor3f(0.0, 1.0, 0.0);
//			glTranslatef(0.0f, -1.0f, 0.0f);
//			glScalef(0.5, 2.0, 0.5);
//			glutSolidCube(1.0);
//		glPopMatrix();
//
//		// Left Hand Modeling
//		glPushMatrix();
//			glColor3f(0.0, 0.0, 0.0);
//			glTranslatef(0.0f, -2.3, 0.0);
//			glScalef(0.3, 0.3, 0.3);
//			glutSolidSphere(0.8, 18, 18);
//		glPopMatrix();
//	glPopMatrix();
//}
//void drawRightLeg()
//{
//	glPushMatrix();
//		// Transform
//		glTranslatef(-0.5f, 0.0f, 0.0f);
//		glRotatef(legAngleR, 1.0f, 0.0f, 0.0f);
//		
//		// Modeling
//		glPushMatrix();
//			glColor3f(0.0, 1.0, 1.0);
//			glTranslatef(0.0f, -2.0f, 0.0);
//			glScalef(0.6, 4.0, 0.8);
//			glutSolidCube(1.0);
//		glPopMatrix();
//
//		//Modeling
//		glPushMatrix();
//			glColor3f(0.0, 0.0, 0.0);
//			glTranslatef(0.0, -4.3, 0.3);
//			glScalef(0.6, 0.5, 1.3);
//			glutSolidCube(1.0);
//		glPopMatrix();
//
//	glPopMatrix();
//}
//void drawLeftLeg()
//{
//	glPushMatrix();
//		// Transform
//		glTranslatef(0.5f, 0.0f, 0.0f);
//		glRotatef(legAngleL, 1.0f, 0.0f, 0.0f);
//
//		// Modeling
//		glPushMatrix();
//			glColor3f(0.0, 1.0, 1.0);
//			glTranslatef(0.0, -2.0, 0.0);
//			glScalef(0.6, 4.0, 0.8);
//			glutSolidCube(1.0);
//		glPopMatrix();
//
//		// Modeling
//		glPushMatrix();
//			glColor3f(0.0, 0.0, 0.0);
//			glTranslatef(0.0f, -4.3, 0.3);
//			glScalef(0.6, 0.5, 1.3);
//			glutSolidCube(1.0);
//		glPopMatrix();
//	glPopMatrix();
//}
