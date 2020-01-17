#include <stdio.h>
#include<GL/glut.h>
float x_pos=-10;
int state=1;
void timer(int a)
{
glutPostRedisplay();
glutTimerFunc(1000/60,timer,0);
switch(state)
{
case 1:
if(x_pos<=3)

x_pos+=0.05;

else

state=-1;
break; 


case -1:
if(x_pos>=-10)
{
x_pos-=0.05;
}
else
	state=1;
   break;

}


}/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void display()
{
/*specifies red,green,blue and alpha (opacity) values used by glclear to clear the color buffers*/
glClearColor(1.0,1.0,1.0,1.0);
glClear(GL_COLOR_BUFFER_BIT);/*performs clear operation on one or more buffers at the same time*/
glLoadIdentity();



gluOrtho2D(-10,10,-10,10);

glBegin(GL_POLYGON);

glVertex2f(x_pos,0.0);
glColor3f(0.0,2.0,0.0);
glVertex2f(x_pos,2.0);

glVertex2f(x_pos+1,2.0);

glVertex2f(x_pos+2,3.5);
glColor3f(0.50,4.0,1.5);
glVertex2f(x_pos+5,3.5);

glVertex2f(x_pos+6,2.0);

glVertex2f(x_pos+7,2.0);
glColor3f(0.0,2.0,0.5);
glVertex2f(x_pos+7,0.0);

glEnd();	

glColor3f(1.0,0.0,0.0);
glBegin(GL_POINTS);

glVertex2f(x_pos+2,-0.15);
glVertex2f(x_pos+1.7,-0.3);
glVertex2f(x_pos+1.6,-0.6);
glVertex2f(x_pos+1.7,-0.9);
glVertex2f(x_pos+2,-1.1);
glVertex2f(x_pos+2.3,-0.3);
glVertex2f(x_pos+2.4,-0.6);
glVertex2f(x_pos+2.3,-0.9);

glEnd();	
glPointSize(5);
glBegin(GL_POINTS);

glVertex2f(x_pos+5,-0.15);
glVertex2f(x_pos+4.7,-0.3);
glVertex2f(x_pos+4.6,-0.6);
glVertex2f(x_pos+4.7,-0.9);
glVertex2f(x_pos+5,-1.1);
glVertex2f(x_pos+5.3,-0.3);
glVertex2f(x_pos+5.4,-0.6);
glVertex2f(x_pos+5.3,-0.9);

glEnd();	

glColor3f(1.0,0.0,0.5);

glBegin(GL_LINES);

glVertex2f(-10,-1.2);
glVertex2f(10,-1.2);

glEnd();	


glutSwapBuffers();
}


int main(int argc, char** argv) {
   
glutInit(&argc,argv); 

glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

glutInitWindowSize(700,500);

glutInitWindowPosition(300,300);

glutCreateWindow("Car"); 

glutDisplayFunc(display); 
glutTimerFunc(0,timer,0);

glutMainLoop();
}
