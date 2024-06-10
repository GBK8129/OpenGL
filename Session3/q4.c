#include<stdio.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
struct Points{
 GLfloat x,y,z;
};
struct Points p[100];
int count=0;
void readinput() {
   FILE *fptr=fopen("input.txt","r");
   if(fptr)
   {
     while(fscanf(fptr,"%f %f %f",&p[count].x,&p[count].y,&p[count].z)!=EOF)
     {count++;}
     fclose(fptr);
   }
}
void rstrip() {
glClearColor(0.0,0.0,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_QUAD_STRIP);
   for(int i=0;i<count;i++)
   {
      glVertex3f(p[i].x,p[i].y,p[i].z);
   }
   glEnd();

   glFlush();
}
int main(int argc,char** argv)
{
   glutInit(&argc,argv);
   glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
   glutInitWindowSize(500,500);
   glutInitWindowPosition(100,100);
   glutCreateWindow("W");
   readinput();
   printf("ahhhh");
   glutDisplayFunc(rstrip);
   glutMainLoop();
   return 0;
}

