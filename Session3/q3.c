#include<GL/freeglut.h>
#include<GL/gl.h>
#include<stdio.h>
struct points
{GLfloat x,y;};
struct points p[100];
int count=0;
void fnc()
{
  FILE *fptr=fopen("input.txt","r");
  if(fptr)
  {
    while(fscanf(fptr,"%f %f",&p[count].x,&p[count].y)!=EOF)
    {count++;}
    fprintf(fptr,"Donee");
    fclose(fptr);
  }

  glClearColor(0.5,0.77,0.89,1.0);
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_POLYGON);
  for(int i=0;i<count;i++)
  {glVertex2f(p[i].x,p[i].y);}
  glEnd();
  glColor3f(0.0,0.0,0.5);
  glBegin(GL_LINES);
  for(int i=0;i<count;i++)
  for(int j=i+2;j<count;j++)
  {
      vx1=
      vx2=
      vy1=
      vy2=
      glVertex2f(p[i].x,p[i].y);glVertex2f(p[j].x,p[j].y);

  }
  //{glVertex2f(p[i].x,p[i].y);}
  glEnd();
  glFlush();
}
int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glutDisplayFunc(fnc);
  glutMainLoop();
  return 0;

}
