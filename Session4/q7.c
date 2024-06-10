#include<math.h>
#include<stdio.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
#include<stdlib.h>
struct Circle
{GLfloat x,y;GLfloat cl1,cl2,cl3;};
struct Circle c[1000];
int count=0;
void drawCircle(GLfloat x, GLfloat y,GLfloat cl1,GLfloat cl2, GLfloat cl3)
{
  glColor3f(cl1,cl2,cl3);
  glBegin(GL_TRIANGLE_FAN);
  for(int i=0;i<360;i+=5)
  {
    GLfloat angle=i*(M_PI)/180;
    GLfloat ax=x+0.1*cos(angle);
    GLfloat ay=y+0.1*sin(angle);
    glVertex2f(ax,ay);
  }
  glEnd();
}
void func1()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glClearColor(1.0,1.0,1.0,1.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-1.0,1.0,-1.0,1.0);
  for(int i=0;i<count;i++)
  {drawCircle(c[i].x,c[i].y,c[i].cl1,c[i].cl2,c[i].cl3);}
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glFlush();
  glutSwapBuffers();
  
}
void changefunc(int button, int state, int x, int y)
{
  if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
  {
    if(count<1000)
    {
      GLfloat nx=2.0*x/glutGet(GLUT_WINDOW_HEIGHT)-1.0;
      GLfloat ny=1.0-(2.0*y/glutGet(GLUT_WINDOW_WIDTH));
      c[count].x=nx; c[count].y=ny; c[count].cl1=0.412;
      c[count].cl2=0.9;c[count].cl3=0.66;
      count++;
      
    }
  }
  else if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
  {
    if(count>0)
    {
      c[count-1].cl1=(float)rand()/RAND_MAX;
      c[count-1].cl2=(float)rand()/RAND_MAX;
      c[count-1].cl3=(float)rand()/RAND_MAX;
    }
  }
  glutPostRedisplay();
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glutDisplayFunc(func1);
  glutMouseFunc(changefunc);
  glutMainLoop();
  return 0;
}
