#include<iostream>
#include<fstream>
#include<boost/format.hpp>
#include<QtGui>
#include<CGAL/Qt/GraphicsViewNavigation.h>
#include<QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<CGAL/Cartesian.h>
#include<CGAL/Point_2.h>
#include<QPen>
#include<QPolygonF>

typedef CGAL::Cartesian<double> K;
typedef K::Point_2 Point_2;

int main(int argc, char** argv)
{
   QApplication app(argc,argv);
   QGraphicsScene scene;
   QGraphicsView *view=new QGraphicsView(&scene);
   scene.setSceneRect(0,0,500,500);
   Point_2 p;
   QPen pen;
   pen.setColor(Qt::red);
   std::ifstream iFile("input.txt",std::ios::in);
   QPolygonF polygon;
   while(iFile>>p)
     polygon<<QPointF(p.x(),p.y());
   scene.addPolygon(polygon,pen,QBrush(Qt::blue));
   
   CGAL::Qt::GraphicsViewNavigation navigator;
   view->installEventFilter(&navigator);
   view->viewport()->installEventFilter(&navigator);
   view->setRenderHint(QPainter::Antialiasing);
   view->show();
   
   return app.exec();
}
