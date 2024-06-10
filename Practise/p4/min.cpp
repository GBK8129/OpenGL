#include<iostream>
#include<fstream>
#include<boost/format.hpp>
#include<QtGui>
#include<CGAL/Qt/GraphicsViewNavigation.h>
#include<QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QPen>
#include<CGAL/Cartesian.h>
#include<CGAL/Point_2.h>
#include<CGAL/Segment_2.h>
#include<vector>

typedef CGAL::Cartesian<double> K;
typedef K::Point_2 Point_2;
typedef K::Segment_2 Segment_2;

int main(int argc, char** argv)
{
  QApplication app(argc,argv);
  QGraphicsScene scene;
  QGraphicsView *view=new QGraphicsView(&scene);
  Point_2 p1,p2;
  std::vector<Segment_2> segment;
  QPen pen;
  pen.setColor(Qt::red);
  std::ifstream iFile("input.txt",std::ios::in);
  
  scene.setSceneRect(0,0,500,500);
  while(iFile>>p1 && iFile>>p2)
   {
     scene.addLine(p1.x(),p1.y(),p2.x(),p2.y());
     segment.push_back(Segment_2(p1,p2));
   }
  int size=segment.size();
  for(int i=0;i<size-1;i++)
   for(int j=i+1;j<size;j++)
    {
      if(CGAL::do_intersect(segment[i],segment[j]))
      {
        auto res=CGAL::intersection(segment[i],segment[j]);
        if(Point_2* point=boost::get<Point_2>(&*res))
        {std::cout<<"YES "<<*point<<"\n";}
      }
      else
      {std::cout<<"NO\n";}
    
    }
    
  CGAL::Qt::GraphicsViewNavigation navigator;
  view->installEventFilter(&navigator);
  view->viewport()->installEventFilter(&navigator);
  view->setRenderHint(QPainter::Antialiasing);
  view->show();
  
  return app.exec();  
}
