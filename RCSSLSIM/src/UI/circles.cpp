#include "circles.h"
#include <QGraphicsScene>
#include <QPainter>
#include <QStyleOption>
#include <math.h>

 static const double Pi = 3.14159265358979323846264338327950288419717;
 static double TwoPi = 2.0 * Pi;

 static qreal normalizeAngle(qreal angle)
 {
     while (angle < 0)
         angle += TwoPi;
     while (angle > TwoPi)
         angle -= TwoPi;
     return angle;
 }

 Circle::Circle(QColor c)
	 : angle(0), speed(0), color(c){}
 Circle::Circle()
     : angle(0), speed(0),color(qrand() % 256, qrand() % 256, qrand() % 256)
 {
 }

 QRectF Circle::boundingRect() const
 {
     qreal adjust = 0.5;
     return QRectF(-18 - adjust, -22 - adjust,
                   36 + adjust, 60 + adjust);
 }

 QPainterPath Circle::shape() const
 {
     QPainterPath path;
     path.addRect(-10, -20, 20, 40);
     return path;
 }

 void Circle::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
 {
     painter->setBrush(color);
     painter->drawEllipse(-10, -20, 20, 20);
 }

 void Circle::advance(int step)
 {
 }
