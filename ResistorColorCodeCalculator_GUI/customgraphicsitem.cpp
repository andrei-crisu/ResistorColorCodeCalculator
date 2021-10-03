#include "customgraphicsitem.h"
#include<QBrush>
#include<QPen>
#include<QPainterPath>
#include<QPainter>
#include<QString>

CustomGraphicsItem::CustomGraphicsItem(double x,double y,double height, double headWidth, double middleWidth,double cornerDimension)
{
    //initializing variables
    CustomGraphicsItem::height=height;
    CustomGraphicsItem::headWidth=headWidth;
    CustomGraphicsItem::middleWidth=middleWidth;
    CustomGraphicsItem::cornerSize=cornerDimension;
    CustomGraphicsItem::xPos=x;
    CustomGraphicsItem::yPos=y;

    //set default bands values
    band1=band2=band3=band4=0;
    resistorColorType=0;

    //set bandRectangles
    rectBand1=QRectF(x+0.3*headWidth,y,0.2*headWidth,height+2*cornerDimension);
    rectBand2=QRectF(x+headWidth+2*cornerDimension,y+cornerDimension,0.2*headWidth,height);
    rectBand3=QRectF(x+headWidth+0.5*middleWidth,y+cornerDimension,0.2*headWidth,height);
    rectBand4=QRectF(x+1.3*headWidth+middleWidth+2*cornerDimension,y,0.2*headWidth,height+2*cornerDimension);



    //drawing resistor shape
    //it can be easy customized
    fourBandResistor.moveTo(x,y);
    fourBandResistor.lineTo(x-cornerDimension,y+cornerDimension);
    fourBandResistor.lineTo(x-cornerDimension,y+height+cornerDimension);
    fourBandResistor.lineTo(x,y+height+2*cornerDimension);
    fourBandResistor.lineTo(x+headWidth,y+height+2*cornerDimension);
    fourBandResistor.lineTo(x+headWidth+cornerDimension,y+height+cornerDimension);
    fourBandResistor.lineTo(x+headWidth+middleWidth+cornerDimension,y+height+cornerDimension);
    fourBandResistor.lineTo(x+headWidth+middleWidth+2*cornerDimension,y+height+2*cornerDimension);
    fourBandResistor.lineTo(x+2*headWidth+middleWidth+2*cornerDimension,y+height+2*cornerDimension);
    fourBandResistor.lineTo(x+2*headWidth+middleWidth+3*cornerDimension,y+height+cornerDimension);
    fourBandResistor.lineTo(x+2*headWidth+middleWidth+3*cornerDimension,y+cornerDimension);
    fourBandResistor.lineTo(x+2*headWidth+middleWidth+2*cornerDimension,y);
    fourBandResistor.lineTo(x+headWidth+middleWidth+2*cornerDimension,y);
    fourBandResistor.lineTo(x+headWidth+middleWidth+cornerDimension,y+cornerDimension);
    fourBandResistor.lineTo(x+headWidth+cornerDimension,y+cornerDimension);
    fourBandResistor.lineTo(x+headWidth,y);


    fourBandResistor.closeSubpath();
}

void CustomGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    //default resistor color is a blue shade
    //because default resistorColorType is 0
    QColor color(128,205,199);  //blue shade
    //selecting resistor color
    switch (resistorColorType) {
    case 0:
        //blue shade
        color=QColor(128,205,199);
        break;
    case 1:
        //beige shade
        color=QColor(211, 168, 119);
        break;
    case 2:
        //grey shade
        color=QColor(152,152,152);
        break;
    }
    //drawing resistor shape
    QPen pen(color,1);
    QBrush brush(color);
    painter->setPen(pen);
    painter->setBrush(brush);
    painter->fillPath(fourBandResistor, brush);

    //draw first resistor band
    QColor band_color1=bandColor(band1);
    QBrush band_brush1(band_color1);
    painter->setBrush(band_brush1);
    painter->drawRect(rectBand1);

    //draw  second resitor band
    QColor band_color2=bandColor(band2);
    QBrush band_brush2(band_color2);
    painter->setBrush(band_brush2);
    painter->drawRect(rectBand2);

    //draw third resistor band
    QColor band_color3=multiplierBandColor(band3);
    QBrush band_brush3(band_color3);
    painter->setBrush(band_brush3);
    painter->drawRect(rectBand3);

    //draw fourth resistor band
    QColor band_color4=toleranceBandColor(band4);
    QBrush band_brush4(band_color4);
    painter->setBrush(band_brush4);
    painter->drawRect(rectBand4);

    //update drawn item
    update();

}

QRectF CustomGraphicsItem::boundingRect() const
{
    QRectF rect(xPos-2*cornerSize,yPos-cornerSize,
                middleWidth+2*headWidth+6*cornerSize,height+4*cornerSize);
    return rect;
}

void CustomGraphicsItem::setFirstBand(int val)
{
    band1=val;
}

void CustomGraphicsItem::setSecondBand(int val)
{
    band2=val;
}

void CustomGraphicsItem::setThirdBand(int val)
{
    band3=val;
}

void CustomGraphicsItem::setFourthBand(int val)
{
    band4=val;
}

void CustomGraphicsItem::setBandValues(int val1, int val2, int val3, int val4)
{
    band1=val1;
    band2=val2;
    band3=val3;
    band4=val4;
}

QColor CustomGraphicsItem::toleranceBandColor(int bandValue)
{
    switch (bandValue) {
    case 0:
        //brown
        return QColor(82,58,40);
        break;
    case 1:
        //red
        return QColor(151,12,16);
        break;
    case 2:
        //green
        return QColor(16,66,16);
        break;
    case 3:
        //blue
        return QColor(0,48,96);
        break;
    case 4:
        //violet
        return QColor(92,3,140);
        break;
    case 5:
        //grey
        return QColor(89,94,96);
        break;
    case 6:
        //gold
        return QColor(233,162,0);
        break;
    case 7:
        //silver
        return QColor(138,158,160);
        break;
    default:
        //brown
        return QColor(82,58,40);
        break;
    }
}

QColor CustomGraphicsItem::multiplierBandColor(int bandValue)
{
    switch (bandValue) {
    case 0:
        //black
        return QColor(0,0,0);
        break;
    case 1:
        //brown
        return QColor(82,58,40);
        break;
    case 2:
        //red
        return QColor(151,12,16);
        break;
    case 3:
        //orange
        return QColor(208,83,1);
        break;
    case 4:
        //yellow
        return QColor(250,194,24);
        break;
    case 5:
        //green
        return QColor(16,66,16);
        break;
    case 6:
        //blue
        return QColor(0,48,96);
        break;
    case 7:
        //violet
        return QColor(92,3,140);
        break;
    case 8:
        //grey
        return QColor(89,94,96);
        break;
    case 9:
        //white
        return QColor(255,255,255);
        break;
    case 10:
        //gold
        return QColor(233,162,0);
        break;
    case 11:
        //silver
        return QColor(138,158,160);
        break;
    default:
        //black
        return QColor(0,0,0);
        break;
    }
}

QColor CustomGraphicsItem::bandColor(int bandValue)
{
    switch (bandValue) {
    case 0:
        //black
        return QColor(0,0,0);
        break;
    case 1:
        //brown
        return QColor(82,58,40);
        break;
    case 2:
        //red
        return QColor(151,12,16);
        break;
    case 3:
        //orange
        return QColor(208,83,1);
        break;
    case 4:
        //yellow
        return QColor(250,194,24);
        break;
    case 5:
        //green
        return QColor(16,66,16);
        break;
    case 6:
        //blue
        return QColor(0,48,96);
        break;
    case 7:
        //violet
        return QColor(92,3,140);
        break;
    case 8:
        //grey
        return QColor(89,94,96);
        break;
    case 9:
        //white
        return QColor(255,255,255);
        break;
    default:
        //black
        return QColor(0,0,0);
        break;
    }
}

QString CustomGraphicsItem::getStringResistorValue()
{
    QString string=getResistance();
    string+="  [ ";
    string+=QString::number(getTolerance(),'g');
    string+="% ]";
    return string;
}

double CustomGraphicsItem::getTolerance()
{
    double tolerance;
    switch (band4) {
    case 0:
        tolerance=1;
        break;
    case 1:
        tolerance=2;
        break;
    case 2:
        tolerance=0.5;
        break;
    case 3:
        tolerance=0.25;
        break;
    case 4:
        tolerance=0.1;
        break;
    case 5:
        tolerance=0.05;
        break;
    case 6:
        tolerance=5;
        break;
    case 7:
        tolerance=10;
        break;
    default:
        tolerance=1;
        break;
    }
    return tolerance;
}

QString CustomGraphicsItem::getResistance()
{
    QVector<QString> multipliers({"","k","M","G","T","P","E"});
    QString resistance="";
    double value= band1*10+band2;
    int multiplier;
    switch (band3) {
    case 0:
        resistance=QString::number(value,'g')+" Ohms";
        break;
    case 10:
        resistance=QString::number(value*0.1,'g')+" Ohms";
        break;
    case 11:
        resistance=QString::number(value*0.01,'g')+" Ohms";
        break;
    case 1:case 2:case 3:case 4:case 5:case 6:
    case 7:case 8:case 9:
        multiplier=band3 / 3;
        value=value*pow(10,(band3 % 3));
        if(value>=1000)
        {
            value=value/1000;
            multiplier+=1;
        }
        resistance=QString::number(value,'g')+" "+multipliers.at(multiplier)+"Ohms";
        break;
    }
    return resistance;
}

