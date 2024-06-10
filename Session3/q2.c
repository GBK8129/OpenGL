#include<GL/freeglut.h>
#include<GL/gl.h>
#include<stdio.h>
struct Points {
  GLfloat x,y;
};
struct Points p[100];
int count=0;
void func()
{
  FILE *fptr=fopen("input.txt","r");
  if(fptr)
  {
    while(fscanf(fptr,"%f %f",&p[count].x,&p[count].y)!=EOF)
    {count++;}
  }
  glClearColor(1.0,1.0,1.0,1.0);
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0,0.0,0.1);
  glBegin(GL_LINE_STRIP);
  for(int i=0;i<count;i++)
  {glVertex2f(p[i].x,p[i].y);}
  glEnd();
  glBegin(GL_TRIANGLES);
glColor3f( 1, 0, 0 ); // red
glVertex2f( -0.8, -0.8 );
glColor3f( 0, 1, 0 ); // green
glVertex2f( 0.8, -0.8 );
glColor3f( 0, 0, 1 ); // blue
glVertex2f( 0, 0.9 );
glEnd();

  glFlush();
}
int main(int argc, char** argv)
{
   glutInit(&argc,argv);
   glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
   glutInitWindowSize(500,500);
   glutInitWindowPosition(100,100);
   glutCreateWindow("W");
   glutDisplayFunc(func);
   glutMainLoop();
   return 0;
}
