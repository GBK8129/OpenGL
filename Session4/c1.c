#include<math.h>
#include<stdio.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
void changefunc()
{
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-250,250,-250,250);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glColor3f(1.0,0.66,0.0);
  glBegin(GL_TRIANGLE_STRIP);
  for(int i=0;i<=360;i+=5)
  {
    GLfloat angle=i*(M_PI)/180.0;
    GLfloat x=100*cos(angle);
    GLfloat y=100*sin(angle);
    glVertex2f(x,y);    
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
