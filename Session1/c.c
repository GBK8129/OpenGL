#include<GL/freeglut.h>
#include<GL/gl.h>
int main(int argc, char **argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("My first window");
  glBegin(GL_LINES);
  glColor3f(1.0,0.0,0.0);
  glVertex2f(-0.5,-0.5);
  glVertex2f(-0.5,0.5);
  glEnd();
  glBegin(GL_LINES);
  glColor3f(0.0,1.0,0.0);
  glVertex2f(-0.2,0.2);
  glVertex2f(-0.3,0.3);
  glEnd();
  glBegin(GL_LINES);
  glColor3f(0.0,0.0,1.0);
  glVertex2f(0.4,0.5);
  glVertex2f(1.0,0.9);
  glEnd();
  glFlush();
  glutMainLoop();
  return 0;
}
