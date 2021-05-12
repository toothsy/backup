#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
int n;

void display()
{
GLfloat vertices[3][3]={{10.0,0.0,0.0},{10.0,20,0.0},{20.0,0.0,0.0}};
GLfloat p[3]={7.5,5.0,0.0};

 int j, k;
 int rand();
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_POINTS);
   for(k=0;k<n;k++)
			{	j=rand()%3;

				p[0]=(p[0]+vertices[j][0])/2;
				p[1]=(p[1]+vertices[j][1])/2;
				glVertex3fv(p);
     			}
      glEnd();
glFlush();

}

void myinit()
{    glClearColor (1.0, 1.0, 0.0,1.0);
    glColor3f(0.0,0.0,0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 25.0, 0.0, 25.0);

}
int main(int argc, char **argv)
{
printf("Enter the number of divisions\n");
	 scanf("%d",&n);

   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE);
   glutInitWindowSize(700, 700);
   glutCreateWindow("2D Gasket but Random");
   glutDisplayFunc(display);
	 myinit();
   glutMainLoop();
}
