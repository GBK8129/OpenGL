#include<stdio.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
#include<math.h>
struct Points
{GLfloat x,y;};
struct Points p[1000];
int count=0;
void changefunc()
{
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-250,250,-250,250);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glColor3f(0.88,0.9,1.0);
  glBegin(GL_TRIANGLE_FAN);
  for(int i=0;i<=100;i++)
  {
    GLfloat angle=i*2.0*(M_PI)/100;
    GLfloat x=100*cos(angle);
    GLfloat y=100*sin(angle);
    glVertex2f(x,y);
    p[count].x=x;
    p[count].y=y;
    count++;
  }
  glEnd();
 /* glColor3f(1.0,1.0,0.0);
  glBegin(GL_LINE_STRIP);
  for(int i=0;i<count;i++)
  {glVertex2f(p[i].x,p[i].y);}
  glEnd();*/
  glFlush();
  glutSwapBuffers();
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glutDisplayFunc(changefunc);
  glutMainLoop();
  return 0;
}
