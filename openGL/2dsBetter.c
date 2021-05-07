#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
int n=10000,k=0;
GLfloat p[3]={7.5,5.0,0.0};

void display()
{
	glBegin(GL_POINTS);
	glVertex2fv(p);
	glEnd();
	glFinish();
}

void update(int value)
{

	// printf("update\n");
	GLfloat vertices[3][3]={{0.0,0.0,0.0},{25.0,50,0.0},{50.0,0.0,0.0}};

	int j;

	if(k<n)
	{
		j=rand()%3;
		p[0]=(p[0]+vertices[j][0])/2;
		p[1]=(p[1]+vertices[j][1])/2;

		k++;
		if(k%1000==0) printf("%d\n",k);
	}

	glutPostRedisplay();
	glutTimerFunc(10, update, 0);
}

void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 60.0, -15.0, 60.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor (1.0, 1.0,1.0,1.0);
    glColor3f(0.0,0.0,0.0);
	glPointSize(2);
	glClear(GL_COLOR_BUFFER_BIT);
}

int main(int argc, char **argv)
{
	printf("Enter the number of divisions\n");
		//  scanf("%d",&n);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("2D Gasket");
	glutDisplayFunc(display);
	glutTimerFunc(10, update, 0);
	myinit();
	glutMainLoop();
}
