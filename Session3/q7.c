#include<stdio.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
struct Points
{GLfloat x,y;};
struct Points p[1000];
int count=0;
int mousebtn=1;
void oksuckit()
{
  glBegin(GL_LINE_STRIP);
  for(int i=0;i<count;i++)
  {glVertex2f(p[i].x,p[i].y);}
  glEnd();
  glFlush();
}
void changefunc(int x,int y)
{
   if(mousebtn==1){
   GLfloat nx,ny;
   nx=(2.0*x)/glutGet(GLUT_WINDOW_WIDTH)-1.0;
   ny=1.0-(2.0*y)/glutGet(GLUT_WINDOW_WIDTH);
   if(count<1000){
   p[count].x=nx;
   p[count].y=ny;
   count++;
   oksuckit();
   }
   }
}
void fuckit(int button, int state, int x, int y)
{
  if(state==GLUT_UP)
  {mousebtn=1;count=0;}
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glutMouseFunc(fuckit);
  glutMotionFunc(changefunc);
  glutMainLoop();
  return 0;
}
