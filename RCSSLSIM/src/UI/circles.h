#ifndef CIRCLES_H
#define CIRCLES_H

#include <QGraphicsItem>

class Circle : public QGraphicsItem{
	public: 
		Circle();	
		Circle(QColor c);	
		QRectF boundingRect() const;
		QPainterPath shape() const;
	    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

	protected:
		void advance(int step);

	private:
		 qreal angle;
		 qreal speed;
		 QColor color;
};
#endif // CIRCLES_H
