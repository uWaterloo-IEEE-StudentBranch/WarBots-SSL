#include <QtGui/QApplication>
#include <QtGui>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <qpixmap.h>
#include <qmainwindow.h>
#include <qgraphicsitem.h>
#include "team.h"
#include "circles.h"
#include "MyGraphicsView.h"

static const int CircleCount = 7;

int main(int argc, char *argv[])
{
	 QApplication a(argc, argv);
	 QGraphicsScene scene;
	 QRect sceneRect(0,0,740,540);
	 scene.setSceneRect(sceneRect);
	 scene.setItemIndexMethod(QGraphicsScene::NoIndex);

	 Team A(5,QColor(0,0,255));
	 Team B(5,QColor(255,255,0),50);
	 A.addToScene(scene);
	 B.addToScene(scene);
	
	 MyGraphicsView v;
	 v.setRenderHint(QPainter::Antialiasing);
	 v.setCacheMode(QGraphicsView::CacheBackground);
	 v.setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
	 v.setDragMode(QGraphicsView::ScrollHandDrag);

	v.setScene(&scene);
	v.show();
	return a.exec();
}
