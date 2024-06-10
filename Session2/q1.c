#include<GL/freeglut.h>
#include<GL/gl.h>
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glColor3f(1.0,0.0,0.0);
  glPointSize(8.0);
  glBegin(GL_POINTS);
     glVertex2f(0.5,0);
     glVertex2f(0.2,0.5);
     glVertex2f(-0.2,0.5);
     glVertex2f(1.0,1.0);
     glVertex2f(1.0,-1.0);
     glVertex2f(-1.0,1.0);
     glVertex2f(-1.0,-1.0);
  glEnd();
  glFlush();
  glutMainLoop();
  return 0;
}
