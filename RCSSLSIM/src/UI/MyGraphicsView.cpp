#include "MyGraphicsView.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <qmessagebox.h>


void MyGraphicsView::resizeEvent(QResizeEvent* event){
}

MyGraphicsView::MyGraphicsView(QWidget* parent): fieldWidth(742), fieldHeight(542){
	this->setFixedSize(fieldWidth,fieldHeight);	
}

void MyGraphicsView::drawBackground(QPainter* painter, const QRectF& rect){
	int startAngle = 30 * 16;
	int spanAngle = 120 * 16;
	painter->setBrush(Qt::darkGreen);
	painter->setPen(Qt::white);
	painter->drawRect(0,0,740,540); // main
	painter->drawRect(67.5,67.5,605,405); // inner
	painter->drawEllipse(320,220,100,100); // middle circle
	painter->drawRect(370,67.5,0.5,405); // middle line
	painter->drawRect(37,235,30,70); // goal 1
	painter->drawRect(67.5+80,235+17.5,0.5,35); // goal arc line
	painter->drawArc(QRect(-13,190-17.5,160,160), 0, 1440); // goal arc 1
	painter->drawArc(QRect(-13,190+17.5,160,160), -1440, 1440); // goal arc 1
	painter->drawRect(672,235,30,70); // goal 2
	painter->drawRect(540+40+13,235+17.5,0.5,35); // goal arc line
	painter->drawArc(QRect(540+40+13,190-17.5,160,160), 1440, 1440); // goal arc 1
	painter->drawArc(QRect(540+40+13,190+17.5,160,160), -2880, 1440); // goal arc 1
}
