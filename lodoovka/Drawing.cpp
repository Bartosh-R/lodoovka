//
//  Drawing.c
//  lodoovka
//
//  Created by Radosław Pietruszewski on 10.10.2013.
//  Copyright (c) 2013 Radosław Pietruszewski. All rights reserved.
//

#include "Drawing.h"
#include <QRect>
#include <QPainter>
#include <Qt>
#include "mainwindow.h"


void setColor(unsigned char r, unsigned char g, unsigned char b)
{
    MainWindow::singleton->r = r;
    MainWindow::singleton->g = g;
    MainWindow::singleton->b = b;
}

void setGrey(unsigned char g)
{
    MainWindow::singleton->r = g;
    MainWindow::singleton->g = g;
    MainWindow::singleton->b = g;
}

 void drawRect(short x, short y, short w, short h)
{
     int drawjob[] = {MainWindow::singleton->r,MainWindow::singleton->g, MainWindow::singleton->b, x, y, w,h};
    std::vector<int> drawjob2 (drawjob, drawjob + sizeof(drawjob) / sizeof(int) );
     MainWindow::singleton->todraw.push_back(drawjob2);
}

 void drawRectr(l_rect rect)
{
    drawRect(rect.x, rect.y, rect.w, rect.h);
}

void drawLineH(short x, short y, short l)
{
    drawRect(x, y, l, 1);
}

 void drawLineV(short x, short y, short l)
{
    drawRect(x, y, 1, l);
}

 void drawScreen()
 {
     MainWindow::singleton->repaint();
 }
