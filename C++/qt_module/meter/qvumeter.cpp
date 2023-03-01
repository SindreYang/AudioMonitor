#include "qvumeter.h"

#include <QDebug>
QVUMeter::QVUMeter(QWidget *parent)
    : QWidget(parent)
{
    colBack = QColor(60, 60, 60);
    colValue = Qt::white;
    colHigh = Qt::red;
    colLow = Qt::blue;
    dimVal = 9;
    min = -70;
    max = 30;
    leftVal = 0;
    rightVal = 0;
    bottomVal=0;//-1 or 1
}
 
void QVUMeter::paintEvent(QPaintEvent *)
{

    paintBar();
    paintValue();
    paintBorder();
}
 
void QVUMeter::paintBorder()
{
    QPainter painter(this);
    painter.setWindow(0, 0, 100, 540);
    painter.setRenderHint(QPainter::Antialiasing);

 
    // paint label
 
    painter.setPen(QPen(colValue, 2));
    QRectF Left(20, 505, 25, 20);
    QRectF Right(55, 505, 25, 20);
    QRectF bottom(20, 510, 60, 15);

    QFont valFont("Arial", 7,QFont::Bold);
    painter.setFont(valFont);
//    painter.drawText(Left, Qt::AlignCenter, "左");
//    painter.drawText(Right, Qt::AlignCenter, "右");

    painter.drawText(bottom,Qt::AlignRight, "+1");
    painter.drawText(bottom,Qt::AlignCenter, "0");
    painter.drawText(bottom,Qt::AlignLeft, "-1");

//    painter.setPen(Qt::red);
//    QFont topFont("Arial", 7,QFont::Bold);
//    painter.setFont(topFont);
//    painter.translate(47,18);
//    painter.rotate(90);
//    painter.drawText(0,0, tr("peak"));
}
 
void QVUMeter::paintBar()
{
    QPainter painter(this);
    painter.setWindow(0, 0, 100, 540);
    painter.setRenderHint(QPainter::Antialiasing);
    // 渐变色
    QLinearGradient linGrad(50, 0, 50, 500);
    linGrad.setColorAt(0, colHigh);
    linGrad.setColorAt(1, colLow);
    linGrad.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad);
 
    // draw color bar
 
    QRectF bar3(20, 50, 25, 450);
    painter.drawRect(bar3);
    QRectF bar4(55, 50, 25, 450);
    painter.drawRect(bar4);


 
    // draw background bar
    painter.setBrush(QColor(40, 40, 40));
    QRectF bar5(20, 510, 60, 15);
    painter.drawRect(bar5);
 
    double length = 450.0;
    double leftBar = abs(length * (min-leftVal)/(max-min));
    double rightBar = abs(length * (min-rightVal)/(max-min));

    QRectF bar1(20, 50, 25, 450-leftBar);
    painter.drawRect(bar1);
    QRectF bar2(55, 50, 25, 450-rightBar);
    painter.drawRect(bar2);
    // 底部渐变色
    QLinearGradient linGrad2(20, 510, 80, 525);
    linGrad2.setColorAt(0, Qt::red);
    linGrad2.setColorAt(1, Qt::green);
    linGrad2.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad2);
    double bottomBar= 30 * bottomVal;
    QRectF bar6(50, 510,bottomBar, 15);
    painter.drawRect(bar6);
 
//    painter.setPen(QPen(Qt::black, 2));
 
//    for (int i = 0; i <=60; i++)
//    {
//        painter.drawLine(21, 500-450*i/60, 44, 500-450*i/60);
//        painter.drawLine(56, 500-450*i/60, 79, 500-450*i/60);
//    }
}
 
void QVUMeter::paintValue()
{
    QPainter painter(this);
    painter.setWindow(0, 0, 100, 540);
    painter.setRenderHint(QPainter::Antialiasing);
 
    painter.setBrush(Qt::black);
    painter.drawRect(20, 15, 25, 25);
    painter.drawRect(55, 15, 25, 25);
    painter.setPen(Qt::gray);
    painter.drawLine(20, 40, 45, 40);
    painter.drawLine(45, 15, 45, 40);
    painter.drawLine(55, 40, 80, 40);
    painter.drawLine(80, 15, 80, 40);
 
    painter.setPen(QPen(colValue, 1));
    QFont valFont("Arial", dimVal, QFont::Bold);
    painter.setFont(valFont);
 
    QRectF leftR(20, 15, 25, 25);
    QString lVal = QString("%1").arg(leftVal, 0,'f', 0);
    painter.drawText(leftR, Qt::AlignCenter, lVal);
    QRectF rightR(55, 15, 25, 25);
    QString rVal = QString("%1").arg(rightVal, 0,'f', 0);
    painter.drawText(rightR, Qt::AlignCenter, rVal);
 
    emit valueLChanged(leftVal);
    emit valueRChanged(rightVal);
}


void QVUMeter::setValueDim(int dim)
{
    dimVal = dim;
    update();
}
 
void QVUMeter::setColorBg(QColor color)
{
    colBack = color;
    update();
}
 
void QVUMeter::setColorValue(QColor color)
{
    colValue = color;
    update();
}
 
void QVUMeter::setColorHigh(QColor color)
{
    colHigh = color;
    update();
}
 
 
void QVUMeter::setColorLow(QColor color)
{
    colLow = color;
    update();
}
 
void QVUMeter::setLeftValue(double leftValue)
{
    if (leftValue > max)
    {
        leftVal = max;
        update();
    }
    else if (leftValue < min)
    {
        leftVal = min;
        update();
    }
    else
    {
        leftVal = leftValue;
        update();
    }
}
 
void QVUMeter::setRightValue(double rightValue)
{
    if (rightValue > max)
    {
        rightVal = max;
        update();
    }
    else if (rightValue < min)
    {
        rightVal = min;
        update();
    }
    else
    {
        rightVal = rightValue;
        update();
    }
}
void QVUMeter::refresh()
{
    rightVal = -70;
    leftVal = -70;
    bottomVal=-70;
    update();
}
void QVUMeter::setBottomVal(double bottomValue)
{
    if (bottomValue > 1)
    {
        bottomVal = 1;
        update();
    }
    else if (bottomValue < -1)
    {
        bottomVal = -1;
        update();
    }
    else
    {
        bottomVal = bottomValue;
        update();
    }
}

void QVUMeter::setMinValue(double minValue)
{
    if (minValue > max)
    {
        min = max;
        max = minValue;
        update();
    }
    else
    {
        min = minValue;
        update();
    }
}
 
void QVUMeter::setMaxValue(double maxValue)
{
    if (maxValue < min)
    {
        max = min;
        min = maxValue;
        update();
    }
    else
    {
        max = maxValue;
        update();
    }
}
 
QSize QVUMeter::minimumSizeHint() const
{
    return QSize(10, 54);
}
 
QSize QVUMeter::sizeHint() const
{
    return QSize(100, 540);
}
 
QVUMeter::~QVUMeter()
{
 
}
