#include<iostream>
#include<boost/format.hpp>
#include<QtGui>
#include<CGAL/Qt/GraphicsViewNavigation.h>
#include<QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>

int main(int argc, char** argv)
{
   QApplication app(argc,argv);
   QGraphicsScene scene;
   QGraphicsView *view=new QGraphicsView(&scene);
   scene.setSceneRect(0,0,500,500);
   scene.addEllipse(400,100,5,5);
   CGAL::Qt::GraphicsViewNavigation navigation;
   view->installEventFilter(&navigation);
   view->viewport()->installEventFilter(&navigation);
   view->setRenderHint(QPainter::Antialiasing);
   view->show();
   return app.exec();
   

}
