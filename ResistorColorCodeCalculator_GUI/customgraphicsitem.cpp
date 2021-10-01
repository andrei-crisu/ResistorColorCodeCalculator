#include "customgraphicsitem.h"
#include<QBrush>
#include<QPen>
#include<QPainterPath>
#include<QPainter>

CustomGraphicsItem::CustomGraphicsItem()
{
    fourBandResistor.moveTo(100,100);
    fourBandResistor.lineTo(80,120);
    fourBandResistor.lineTo(80,320);
    fourBandResistor.lineTo(100,340);
    fourBandResistor.lineTo(200,340);
    fourBandResistor.lineTo(220,320);
    fourBandResistor.lineTo(1020,320);
    fourBandResistor.lineTo(1040,340);
    fourBandResistor.lineTo(1140,340);
    fourBandResistor.lineTo(1160,320);
    fourBandResistor.lineTo(1160,120);
    fourBandResistor.lineTo(1140,100);
    fourBandResistor.lineTo(1040,100);
    fourBandResistor.lineTo(1020,120);
    fourBandResistor.lineTo(220,120);
    fourBandResistor.lineTo(200,100);
    fourBandResistor.closeSubpath();
}

void CustomGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    QColor color(152,152,152);
    QPen pen(color,1);
    QBrush brush(color);
    painter->setPen(pen);
    painter->setBrush(brush);
    painter->fillPath(fourBandResistor, brush);
}

QRectF CustomGraphicsItem::boundingRect() const
{
    QRectF rect(0,0,1260,440);
    return rect;
}
