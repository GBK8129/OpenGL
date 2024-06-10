#include<GL/freeglut.h>
#include<GL/gl.h>
#include<stdio.h>
struct Point {
 GLfloat r,g,b,a;
};
int count=0;
struct Point p;
void readinput()
{
   FILE *fptr=fopen("input.txt","r");
   if(fptr)
   {
     while(fscanf(fptr,"%f %f %f %f",&p.r,&p.g,&p.b,&p.a)!=EOF)
     {
        count++;
     }
   }
   glClearColor(p.r,p.g,p.b,p.a);
   glClear(GL_COLOR_BUFFER_BIT);
   glFlush();
}
int main(int argc, char** argv)
{
   glutInit(&argc,argv);
   glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
   glutInitWindowSize(500,500);
   glutInitWindowPosition(100,100);
   glutCreateWindow("W");
   glutDisplayFunc(readinput);
   glutMainLoop();
   return 0;
}
