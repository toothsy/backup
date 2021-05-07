# include<GL/glut.h>
# include<stdio.h>
void displayTriangle(){
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0,1.0,1.0);
  glLineWidth(50);
  glBegin(GL_TRIANGLES);
    glVertex2f(50,50);
    glVertex2f(0,50);
    glVertex2f(50,0);
  glEnd();
  glFlush();
}
void displayQuad(){
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0,1.0,1.0);
  glLineWidth(50);
  glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(50,0);
    glVertex2f(0,50);
    glVertex2f(50,50);
  glEnd();
  glFlush();
}
void displayLL(){
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0,0.0,0.0);
  glLineWidth(50);
  glBegin(GL_LINE_LOOP);
    glVertex2f(7,7);
    glVertex2f(15,15);
    glVertex2f(7,15);
    glVertex2f(15,7);
  glEnd();
  glFlush();
}
void displayTriFan(){
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0,0.0,0.0);
  glLineWidth(50);
  glBegin(GL_TRIANGLE_FAN);
    glVertex2f(10,0);
    glVertex2f(0,10);
    glVertex2f(10,10);
    glVertex2f(10,15);
    glVertex2f(25,10);
    glVertex2f(25,20);
  glEnd();
  glFlush();
}
void displayTriS(){
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0,0.0,0.0);
  glLineWidth(50);
  glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(10,0);
    glVertex2f(0,10);
    glVertex2f(10,10);
    glVertex2f(10,15);
    glVertex2f(25,10);
    glVertex2f(25,20);
  glEnd();
  glFlush();
}
void init(){
  glClearColor(1.0,1.0,0.0,1.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0,60,60,0);
}

void  main(int argc, char** argv){
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowPosition(960,240);
  glutInitWindowSize(600,600);
  glutCreateWindow("root");
  glutDisplayFunc(displayTriS);
  init();
  glutMainLoop();

}
