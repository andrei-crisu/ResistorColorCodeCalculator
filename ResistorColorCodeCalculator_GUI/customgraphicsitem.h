#ifndef CUSTOMGRAPHICSITEM_H
#define CUSTOMGRAPHICSITEM_H

#include <QGraphicsObject>

class CustomGraphicsItem : public QGraphicsObject
{
public:
    CustomGraphicsItem();
    //override paint()
    void paint(QPainter *painter,const QStyleOptionGraphicsItem * option,QWidget *widget)override;
    QRectF boundingRect()const override;

public:
    QPainterPath fourBandResistor;
};

#endif // CUSTOMGRAPHICSITEM_H
