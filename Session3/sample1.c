#include<GL/freeglut.h>
#include<GL/gl.h>
#include<stdio.h>
struct Points {
 GLfloat x,y;
};
struct Points p[1000];
int count=0;
void myfunc()
{
   FILE *fptr=fopen("input.txt","r");
   if(fptr)
   {
      while(fscanf(fptr,"%f %f",&(p[count].x),&(p[count].y))!=EOF)
      {count++;}
      fclose(fptr);
   }
   glClearColor(1.0,1.0,1.0,1.0);
   printf("%d\n",count);
   glClear(GL_COLOR_BUFFER_BIT);
   glPointSize(5);
   glColor3f(0.2,0.4,0.5);
   int i=0;
   glBegin(GL_POINTS);
   while(i<count)
   {glVertex2f(p[i].x,p[i].y);i++;}
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
  glutDisplayFunc(myfunc);
  glutMainLoop();
  return 0;
  
}
