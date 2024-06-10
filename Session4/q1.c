#include<stdio.h>
#include<math.h>
#include<GL/freeglut.h>
#include<GL/gl.h>
struct Points
{GLfloat x,y;};
struct Points p[10000];
int count=0;
void changefunc()
{
  glClearColor(0.0,0.0,0.0,1.0);
  glClear(GL_COLOR_BUFFER_BIT);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-250,250,-250,250);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glColor3f(0.0,0.0,0.0);
  glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.0,0.0);
    for(int i=0;i<=100;i++)
    {
      GLfloat angle=i*2.0*(M_PI/100.0);
      GLfloat x=100.0*cos(angle);
      GLfloat y=100.0*sin(angle);
      glVertex2f(x,y);
      p[count].x=x;
      p[count].y=y;
      printf("ok");
      count++;
    }
  glEnd();
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINE_STRIP);
  for(int i=0;i<count;i++)
  {
    glVertex2f(p[i].x,p[i].y);
  }
  glEnd(); 
  glFlush();
  glutSwapBuffers();
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glutDisplayFunc(changefunc);
  glutMainLoop();
  return 0;
}
