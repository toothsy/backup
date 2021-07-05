#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
int n=2;
GLfloat p[3]={7.5,5.0,0.0};
 int rand();
void display(){

	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
		glVertex3fv(p);
	glEnd();
	glFlush();

}
void updatePoints(int value){
GLfloat vertices[3][3]={{0.0,0.0,10.0},{25.0,50,10.0},{50.0,0.0,15.0}};
 int j, k;
 if(k<n){
 			j=rand()%3;
			p[0]=(p[0]+vertices[j][0])/2;
			p[1]=(p[1]+vertices[j][1])/2;
				}

}
void myinit()
{
		glClearColor (1.0, 1.0, 1.0,1.0);
		glColor3f(0.0,0.0,0.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0.0, 60.0, 0.0, 60.0);
		//glMatrixMode(GL_MODELVIEW);

}
int main(int argc, char **argv)
{
printf("Enter the number of divisions\n");
	 scanf("%d",&n);

	 glutInit(&argc, argv);
	 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	 glutInitWindowSize(500, 500);
	 glutCreateWindow("2D Gasket");
	 glutDisplayFunc(display);
	 myinit();
	 glutMainLoop();
}
