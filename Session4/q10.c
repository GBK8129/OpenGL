#include<math.h>
#include<stdio.h>
#include<GL/gl.h>
#include<GL/freeglut.h>

void trngl(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3)
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glEnd();
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glEnd();

}
void changefunc(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2,GLfloat x3,GLfloat y3,int depth)
{
  printf("okkkk");
  if(depth==0)
  {
     trngl(x1,y1,x2,y2,x3,y3);
  }
  else{
   GLfloat mx1,mx2,mx3,my1,my2,my3;
   mx1=(x1+x2)/2;
   mx2=(x2+x3)/2;
   mx3=(x1+x3)/2;
   my1=(y1+y2)/2;
   my2=(y2+y3)/2;
   my3=(y1+y3)/2;
   changefunc(x1,y1,mx1,my1,mx3,my3,depth-1);
   changefunc(mx1,my1,x2,y2,mx2,my2,depth-1);
   changefunc(mx2,my2,mx3,my3,x3,y3,depth-1);
   }
}
void disp()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0,1.0,1.0);
  GLfloat x1,x2,x3,y1,y2,y3;
  int depth=4;
  x1=-1.0;y1=-1.0;
  x2=1.0;y2=-1.0;
  x3=0.0;y3=1.0;
  changefunc(x1,y1,x2,y2,x3,y3,depth);
  glFlush();
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glutDisplayFunc(disp);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-1.0,1.0,-1.0,1.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glutSwapBuffers();
  glutMainLoop();
  return 0;
}
