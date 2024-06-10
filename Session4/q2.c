#include<math.h>
#include<stdio.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
void changefunc()
{
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0.0,1.6,0.0,1.6);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  for(int i=0;i<8;i++)
  {
    for(int j=0;j<8;j++)
    {
      if((i+j)%2==0)
      {glColor3f(1.0,1.0,1.0);}
      else
      {glColor3f(0.0,0.0,0.0);}
      glBegin(GL_QUADS);
      glVertex2f(i*0.2,j*0.2);
      glVertex2f((i+1)*0.2,j*0.2);
      glVertex2f((i+1)*0.2,(j+1)*0.2);
      glVertex2f(i*0.2,(j+1)*0.2);
      glEnd();
      
    }
  }
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
