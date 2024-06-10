#include<stdio.h>
#include<GL/freeglut.h>
#include<GL/gl.h>
//GLfloat r,g,b,a;
void changebg(GLfloat r,GLfloat g, GLfloat b,GLfloat a)
{
  glClearColor(r,g,b,a);
  glClear(GL_COLOR_BUFFER_BIT);
  glFlush();
}
void changefunc(unsigned char key,int x,int y)
{
  switch(key)
  {
    case 'r':changebg(1.0,0.0,0.0,1.0);break;
    case 'g':changebg(0.0,1.0,0.0,1.0);break;
    case 'b':changebg(0.0,0.0,1.0,1.0);break;
    case 'a':changebg(1.0,1.0,1.0,1.0);break;
    default:break;
  }
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glutKeyboardUpFunc(changefunc);
  glutMainLoop();
  return 0;
}
