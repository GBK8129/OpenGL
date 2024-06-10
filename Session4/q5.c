#include<math.h>
#include<stdio.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
GLfloat angle=0.0;
void changefunc()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glLoadIdentity();
  glTranslatef(0.0,0.0,0.0);
  glRotatef(angle,0.0,0.0,1.0);
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_TRIANGLES);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.0, 0.5);
  glEnd(); 
  glFlush();
}
void update(int value)
{
  angle+=2.0;
  if(angle>360.0)
  {angle=0.0;}
  glutPostRedisplay();
  glutTimerFunc(16,update,0);
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glutDisplayFunc(changefunc);
  glutTimerFunc(25,update,0);
  glClearColor(0.0,0.0,0.0,1.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-1.0,1.0,-1.0,1.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glutSwapBuffers();
  glutMainLoop();
  return 0;
}
