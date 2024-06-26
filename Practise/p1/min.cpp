#include<iostream>
#include<CGAL/Qt/GraphicsViewNavigation.h>
#include<boost/format.hpp>
#include<QtGui>
#include<QApplication>
#include<QLineF>
#include<QRectF>
#include<QGraphicsScene>
#include<QGraphicsView>

int main(int argc, char** argv)
{
   QApplication app(argc,argv);
   QGraphicsScene scene;
   scene.setSceneRect(0,0,100,100);
   scene.addRect(QRectF(0,0,100,100));
   //scene.addLine(QLineF(0,0,100,100));
   scene.addLine(QLineF(0,50,100,0));
   
   QGraphicsView* view= new QGraphicsView(&scene);
   CGAL::Qt::GraphicsViewNavigation navigation;
   view->installEventFilter(&navigation);
   view->viewport()->installEventFilter(&navigation);
   view->setRenderHint(QPainter::Antialiasing);
   view->show();
   return app.exec();
   
}
