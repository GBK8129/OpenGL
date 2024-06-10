#include<iostream>
#include<fstream>
#include<boost/format.hpp>
#include<QtGui>
#include<CGAL/Qt/GraphicsViewNavigation.h>
#include<QApplication>
#include<QGraphicsView>
#include<QGraphicsScene>
#include<CGAL/Cartesian.h>
#include<CGAL/Point_2.h>
#include<CGAL/Polygon_2.h>
#include<CGAL/Delaunay_triangulation_2.h>
#include<QPolygonF>
#include<QPointF>
#include<CGAL/Triangulation_2.h>
#include<QPen>
#include<vector>

typedef CGAL::Cartesian<double> K;
typedef K::Point_2 Point_2;
typedef CGAL::Polygon_2<K> Polygon_2;
typedef CGAL::Delaunay_triangulation_2<K> Delaunay_triangulation_2;

int main(int argc, char** argv)
{
  QApplication app(argc,argv);
  QGraphicsScene scene;
  QGraphicsView *view=new QGraphicsView(&scene);
  scene.setSceneRect(0,0,500,500);
  
  std::ifstream iFile("input.txt",std::ios::in);
  Point_2 p;
  
  QPolygonF poly;
  QPen pen;
  pen.setColor(Qt::red);
  std::vector<Point_2> points;
  while(iFile>>p)
  {
       poly<<QPointF(p.x(),p.y());
       points.push_back(Point_2(p));
  }
  scene.addPolygon(poly,pen);
  Polygon_2 polygon(points.begin(),points.end());
  std::cout<<polygon.area()<<"\n";
  
  Delaunay_triangulation_2 dt;
  dt.insert(points.begin(),points.end());
  int x=0;
  for(auto i=dt.finite_faces_begin();i!=dt.finite_faces_end();i++)
  {
    Point_2 a=i->vertex(0)->point();
    Point_2 b=i->vertex(1)->point();
    Point_2 c=i->vertex(2)->point();
    
    QPolygonF tr;
    tr<<QPointF(a.x(),a.y());
    tr<<QPointF(b.x(),b.y());
    tr<<QPointF(c.x(),c.y());
    
    auto col=Qt::green;
    if(x%5==0)
    {col=Qt::green;}
    else if(x%5==1)
    {col=Qt::black;}
    else if(x%5==2)
    {col=Qt::white;}
    else if(x%5==3)
    {col=Qt::yellow;}
    else if(x%5==4)
    {col=Qt::blue;}
    x++;
    scene.addPolygon(tr,pen,col);
    
    
  }
  
  
  CGAL::Qt::GraphicsViewNavigation navigator;
  view->installEventFilter(&navigator);
  view->viewport()->installEventFilter(&navigator);
  view->setRenderHint(QPainter::Antialiasing);
  view->show();
  
  return app.exec();
}
