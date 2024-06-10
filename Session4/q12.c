#include<stdio.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
GLfloat angleX=0.0,angleY=0.0;
void drawCube()
{
  glutWireCube(0.5);
}
void func1()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glLoadIdentity();
  glTranslatef(0.0,0.0,-2.0);
  glRotatef(angleX,1.0,0.0,0.0);
  glRotatef(angleY,0.0,1.0,0.0);
  glColor3f(1.0,1.0,1.0);
  drawCube();
  glFlush();
}
void idle() {
  angleX=angleX+0.05;
  angleY=angleY+0.05;
  if(angleX>=360.0)
  {angleX=0.0;}
  if(angleY>=360.0)
  {angleY=0.0;}
  glutPostRedisplay();
  
}
int main(int argc, char** argv)
{
   glutInit(&argc,argv);
   glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
   glutInitWindowSize(500,500);
   glutInitWindowPosition(100,100);
   glutCreateWindow("W");
   glutDisplayFunc(func1);
   glutIdleFunc(idle);
   glEnable(GL_DEPTH_TEST);
   glClearColor(0.0,0.0,0.0,0.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(-1.0,1.0,-1.0,1.0);
   
   gluPerspective(45.0,1.0,1.0,10.0);
   glMatrixMode(GL_MODELVIEW);
   glutSwapBuffers();
   
   glutMainLoop();
   return 0;
   
}
