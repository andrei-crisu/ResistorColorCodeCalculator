#ifndef CUSTOMGRAPHICSITEM_H
#define CUSTOMGRAPHICSITEM_H

#include <QGraphicsObject>

class CustomGraphicsItem : public QGraphicsObject
{
public:
    CustomGraphicsItem(double x,double y,double height,double headWidth,double middleWidth,double cornerDimension=20);
    //override paint()
    void paint(QPainter *painter,const QStyleOptionGraphicsItem * option,QWidget *widget)override;
    QRectF boundingRect()const override;

public:
    QPainterPath fourBandResistor;
    QRectF rectBand1,rectBand2,rectBand3,rectBand4;
    double headWidth;
    double middleWidth;
    double height;
    double cornerSize;
    double xPos,yPos;
    int resistorColorType;

    void setFirstBand(int val);
    void setSecondBand(int val);
    void setThirdBand(int val);
    void setFourthBand(int val);
    void setBandValues(int val1,int val2,int val3,int val4);
    QColor toleranceBandColor(int bandValue);
    QColor multiplierBandColor(int bandValue);
    QColor bandColor(int bandValue);

    //return resistor value as string
    QString getStringResistorValue();
    double getTolerance();
    QString getResistance();

private:
    int band1,band2,band3,band4;

};

#endif // CUSTOMGRAPHICSITEM_H
