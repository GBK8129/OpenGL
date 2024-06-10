#include<stdio.h>
#include<GL/freeglut.h>
#include<GL/gl.h>
struct Points {
 GLfloat x,y;
};
int count=0;
struct Points p[1000];
void func1()
{
  FILE *fptr=fopen("input.txt","r");
  if(fptr)
  {
    while(fscanf(fptr,"%f %f",&p[count].x,&p[count].y)!=EOF)
    {count++;}
    fclose(fptr);
  }
  glClearColor(1.0,1.0,1.0,1.0);
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.5,0.5,0.5);
  glPointSize(7);
  glBegin(GL_POINTS);
  for(int i=0;i<count;i++)
  {glVertex2f(p[i].x,p[i].y);}
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
    glutDisplayFunc(func1);
    glutMainLoop();
    return 0;
    
}
