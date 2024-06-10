#include<GL/freeglut.h>
#include<GL/gl.h>
int main(int argc, char **argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("My first window");
  glPointSize(10.0f);
  glBegin(GL_POINTS);
  glColor3f(0.0,0.0,1.0);
  
  glVertex2f(1.0,1.0);
  glVertex2f(1.0,-1.0);
  glVertex2f(-1.0,-1.0);
  glVertex2f(-1.0,1.0);
  glVertex2f(0.2,0.5);
  glVertex2f(0.9,0.8);
  glVertex2f(0.4,0.3);
  glEnd();
  glFlush();
  glutMainLoop();
  return 0;
}
