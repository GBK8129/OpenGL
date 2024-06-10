#include<GL/freeglut.h>
#include<GL/gl.h>
int main(int argc, char **argv)
{
   glutInit(&argc,argv);
   glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
   glutInitWindowSize(500,500);
   glutInitWindowPosition(100,100);
   glutCreateWindow("Polygon");
   glBegin(GL_POLYGON);
      glVertex2f(-0.5,-0.5);
      glVertex2f(-0.5,0.5);
      glVertex2f(0.5,0.5);
      glVertex2f(0.5,-0.5);
   glEnd();
   glFlush();
   glutMainLoop();
   return 0;
}
