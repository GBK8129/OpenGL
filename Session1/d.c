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
  glVertex2f(0.9,0.9);
  glVertex2f(-0.9,0.9);
  glVertex2f(-0.2,0.0);
  glVertex2f(-0.9,-0.9);
  glVertex2f(0.9,-0.9);
  glEnd();
  glPointSize(10.0f);
  glBegin(GL_POINTS);
  glColor3f(0.0,1.0,0.0);
  glVertex2f(0.2,0.0);
  glVertex2f(0.9,0.9);
  glVertex2f(-0.9,0.9);
  glVertex2f(-0.2,0.0);
  glVertex2f(-0.9,-0.9);
  glVertex2f(0.9,-0.9);
  glEnd();
  glFlush();
  glutMainLoop();
  return 0;
}
