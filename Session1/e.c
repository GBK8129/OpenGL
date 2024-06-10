#include<GL/freeglut.h>
#include<GL/gl.h>
int main(int argc, char **argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("My first window");
  glBegin(GL_POLYGON);
  glColor3f(0.0,0.0,1.0);
  glVertex2f(0.2,0.0);
  glVertex2f(0.5,0.5);
  glVertex2f(0.3,0.8);
  glVertex2f(-0.3,0.8);
  glVertex2f(-0.5,0.5);
  glVertex2f(-0.2,0.0);
  glVertex2f(-0.5,-0.5);
  glVertex2f(0.5,-0.5);
  glEnd();
  glBegin(GL_LINE_LOOP);
  glColor3f(1.0,0.0,0.0);
  glVertex2f(0.2,0.0);
  glVertex2f(0.5,0.5);
  glVertex2f(0.3,0.8);
  glVertex2f(-0.3,0.8);
  glVertex2f(-0.5,0.5);
  glVertex2f(-0.2,0.0);
  glVertex2f(-0.5,-0.5);
  glVertex2f(0.5,-0.5);
  glEnd();
  glFlush();
  glutMainLoop();
  return 0;
}
