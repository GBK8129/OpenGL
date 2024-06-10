#include<stdio.h>
#include<GL/freeglut.h>
#include<GL/gl.h>
#include<math.h>
GLfloat bsx=0.02;
GLfloat bsy=0.03;
GLfloat bx=0.0;
GLfloat by=0.0;
void changefunc()
{
  glColor3f(0.8,0.9,1.0);
  glBegin(GL_TRIANGLE_FAN);
  //glVertex2f(bx,by);
  for(int i=0;i<360;i+=5)
  {
   GLfloat angle=i*(M_PI)/180;
   GLfloat ax=bx+0.1*cos(angle);
   GLfloat ay=by+0.1*sin(angle);
   glVertex2f(ax,ay);
  }
  glEnd();
}
void update(int value)
{
 bx+=bsx;
 by+=bsy;
 if(bx+0.1>1.0 || bx-0.1<-1.0)
 {bsx=-bsx;}
 if(by+0.1>1.0 || by-0.1<-1.0)
 {bsy=-bsy;}
 glutPostRedisplay();
 glutTimerFunc(16,update,0);
}
void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glLoadIdentity();
 changefunc();
 glutSwapBuffers();
 glFlush();
 
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glutDisplayFunc(display);
  glutTimerFunc(25,update,0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-1.0,1.0,-1.0,1.0);
  
  glutMainLoop();
  return 0;
}
