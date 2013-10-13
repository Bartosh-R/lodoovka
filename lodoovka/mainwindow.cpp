#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QDebug>
#include "WindowManager.h"
#include "Event.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
}

MainWindow* MainWindow::singleton;

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);

      QPainter painter(this);

      for(std::vector<std::vector<int> >::iterator ite = todraw.begin(); ite != todraw.end(); ++ite)
      {
            std::vector<int> it = *ite;
          painter.setPen(Qt::NoPen);

          painter.setBrush(QColor(it[0], it[1], it[2]));
          painter.drawRect(it[3], it[4], it[5], it[6]);
      }

      todraw.clear();
}

void MainWindow::mouseMoveEvent(QMouseEvent* event) {
    l_point p = {event->pos().x(),event->pos().y() };
    Event e;
    e.loc = p;
    e.type = ET_MouseDrag;

    wndmgr_hangle_event(e);
}

void MainWindow::mousePressEvent(QMouseEvent* event) {
    l_point p = {event->pos().x(),event->pos().y() };
    Event e;
    e.loc = p;
    e.type = ET_MouseDown;

    wndmgr_hangle_event(e);
}


void MainWindow::mouseReleaseEvent(QMouseEvent* event) {
    l_point p = {event->pos().x(),event->pos().y() };
    Event e;
    e.loc = p;
    e.type = ET_MouseUp;

    wndmgr_hangle_event(e);
}

