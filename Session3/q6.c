#include<stdio.h>
#include<GL/freeglut.h>
#include<GL/gl.h>
void changefunc(int button, int state, int x,int y)
{
  if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
  {
     glColor3f(1.0,1.0,0.55);
     glPointSize(5);
     GLfloat normalizedX = (2.0 * x) / glutGet(GLUT_WINDOW_WIDTH) - 1.0;
     GLfloat normalizedY = 1.0 - (2.0 * y) / glutGet(GLUT_WINDOW_HEIGHT);
     glBegin(GL_POINTS);
     glVertex2f(normalizedX,normalizedY);
     glEnd();
     glFlush(); 
  }
  else if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
  {
     glClearColor(1.0,1.0,1.0,1.0);
     glClear(GL_COLOR_BUFFER_BIT);
     glFlush();
  }
  else if(button==GLUT_RIGHT_BUTTON && state==GLUT_UP)
  {
     glClearColor(0.0,0.0,1.0,1.0);
     glClear(GL_COLOR_BUFFER_BIT);
     glFlush();
  }
  else if(button==GLUT_LEFT_BUTTON && state==GLUT_UP)
  {
     glColor3f(0.99,0.88,0.55);
     glPointSize(10);
     GLfloat normalizedX = (2.0 * x) / glutGet(GLUT_WINDOW_WIDTH) - 1.0;
     GLfloat normalizedY = 1.0 - (2.0 * y) / glutGet(GLUT_WINDOW_HEIGHT);
     glBegin(GL_POINTS);
     glVertex2f(normalizedX,normalizedY);
     glEnd();
     glFlush(); 
  }
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glutMouseFunc(changefunc);
  glutMainLoop();
  return 0;
}
