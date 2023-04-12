/*
#define _CRT_SECURE_NO_WARNINGS
#include <glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
#define PI 3.141592

double getCurrentSec() {
	time_t orgtime;
	struct tm* pTimeData;
	int sec;

	orgtime = time(NULL);
	pTimeData = localtime(&orgtime);
	sec = pTimeData->tm_sec;
	return sec;
}
double getCurrentMin() {
	time_t orgtime;
	struct tm* pTimeData;
	int min;

	orgtime = time(NULL);
	pTimeData = localtime(&orgtime);
	min = pTimeData->tm_min;
	return min;
}
double getCurrentHour() {
	time_t orgtime;
	struct tm* pTimeData;
	int hour;

	orgtime = time(NULL);
	pTimeData = localtime(&orgtime);
	hour = pTimeData->tm_hour;
	return hour;
}
double cur_sec = getCurrentSec();
double cur_min = getCurrentMin()+cur_sec/60;
double cur_hour = getCurrentHour()+cur_min/60;
double duode_to_radian = 6 * PI / 180.00f;

void MyTimer(int Value)
{
	glutPostRedisplay();
	cur_sec++;
	cur_min += 1.0 / 60;
	cur_hour += 1.0 / 3600;
	if (cur_sec == 60) cur_sec = 0;
	if (cur_min >= 60.0) cur_min -= 60;
	if (cur_hour >= 24.0) cur_hour -= 24;
	glutTimerFunc(1000, MyTimer, 1);
}
void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	// 원형 시계틀
	glLineWidth(1.0);
	glColor3f(0.5, 0.5, 0.8);
	glutSolidSphere(0.55, 36, 6);
	glColor3f(1.0, 1.0, 1.0);
	glutWireSphere(0.5, 12, 6);
	glLineWidth(5.0);

	glBegin(GL_LINES);
	// 시침
	glColor3f(0, 0, 1);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.3f * sin(cur_hour * duode_to_radian*5), 0.3f * cos(cur_hour * duode_to_radian*5), 0.0f);
	printf("%f시 ", cur_hour);
	// 분침
	glColor3f(0, 1, 0);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.4f * sin(cur_min * duode_to_radian), 0.4f * cos(cur_min * duode_to_radian), 0.0f);
	printf("%f분 ", cur_min);
	// 초침
	glColor3f(1, 0, 0);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.5f * sin(cur_sec * duode_to_radian), 0.5f * cos(cur_sec * duode_to_radian), 0.0f);
	printf("%f초\n", cur_sec);

	glEnd();
	glFlush();
}
void MyKeyboard(unsigned char KeyPressed, int X, int Y)
{
	switch (KeyPressed) {
	case 'Q': case 'q':
		exit(0); break;
	}
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(700, 700);
	glutCreateWindow("OpenGL Example");
	glClearColor(1, 1, 1, 0);
	glutDisplayFunc(MyDisplay);
	glutTimerFunc(1000, MyTimer, 1);
	glutKeyboardFunc(MyKeyboard);
	glutMainLoop();
	return 0;
}
*/