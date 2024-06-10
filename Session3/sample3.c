#include<stdio.h>
#include<GL/freeglut.h>
#include<GL/gl.h>
GLfloat r=0.0,g=0.0,b=0.0,a=0.0;
void func1() 
{
   glClearColor(1.0,0.0,0.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glFlush();
}
void func2()
{
   glClearColor(0.0,1.0,0.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glFlush();
}
void func3()
{
   glClearColor(0.0,0.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glFlush();
}
void func4()
{
   glClearColor(0.0,0.0,0.0,0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glFlush();
}
void callerfunc(unsigned char key, int x, int y)
{
   switch(key)
   {
      case 'r':func1();break;
      case 'g':func2();break;
      case 'b':func3();break;
      case 'y':func4();break;
      default:break;
                  
      
   }
}
int main(int argc,char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("W");
  glutKeyboardFunc(callerfunc);
  glutMainLoop();
  return 0;
}
