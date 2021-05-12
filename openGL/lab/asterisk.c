#include <GL/glut.h>
#include <stdio.h>
int x1, yOne;
int numberOfLines=0;
void myInit() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 500, 0, 500);
}
void draw_pixel(int x, int y) {
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}

void draw_line(int x1, int x2, int yOne, int y2) {
	int dx, dy, i, decisionParam;
	int incX, incY, inc1, inc2;
	int x,y;
	dx = x2-x1;
	dy = y2-yOne;
	if (dx < 0) dx = -dx;
	if (dy < 0) dy = -dy;
	incX = 1;
	if (x2 < x1) incX = -1;
	incY = 1;
	if (y2 < yOne) incY = -1;
	x = x1; y = yOne;
	if (dx > dy){
		draw_pixel(x, y);
		decisionParam = 2 * dy-dx;
		inc1 = 2*(dy-dx);
		inc2 = 2*dy;
		for (i=0; i<dx; i++){
			if (decisionParam >= 0){	y += incY;decisionParam += inc1;	}
			else 	decisionParam += inc2;
			x += incX;
			draw_pixel(x, y);
			}
	} 
	else {
		draw_pixel(x, y);
		decisionParam = 2*dx-dy;
		inc1 = 2*(dx-dy);
		inc2 = 2*dx;
		for (i=0; i<dy; i++) {
			if (decisionParam >= 0){
				x+= incX;
				decisionParam += inc1;
			}

			else 	decisionParam += inc2;
			y += incY;
			draw_pixel(x, y);
		}
	}
}
void drawManyLines(int x1,int yOne,int numberOfLines){
	int x2=100;
	int y2 =200;
		glClear(GL_COLOR_BUFFER_BIT); 
			for(int i=0;i<numberOfLines;i++ ){
				draw_line(x1, yOne, x2-i*10, y2 -i*10);
				glFlush();
				x2=x2-i*10;
				y2=y2 -i*10;
				printf("came inside");
			}
}
void myDisplay() {	
	
		drawManyLines(x1,yOne,numberOfLines);
	
}
int main(int argc, char **argv){
	printf( "Enter end points of the Line (x1, y1) and numberOflines\n");
	scanf("%d %d %d", &x1, &yOne,&numberOfLines);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bresenham's Line Drawing algo");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}
