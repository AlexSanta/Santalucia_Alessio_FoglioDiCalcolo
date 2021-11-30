#ifndef FOGLIODICALCOLO_VIEW_H
#define FOGLIODICALCOLO_VIEW_H

#include <QtWidgets/QMainWindow>
#include "ViewWindow.h"
#include "Controller.h"

class View : public QMainWindow, public Observer {
Q_OBJECT
public:
    View(Model *m, Controller *c, QWidget *parent = 0);

    ~View();

    virtual void update() override;

    ViewWindow *getUi() const { return ui; }

private slots:

    void onCellChanged(int i, int j);

private:
    ViewWindow *ui;
    Model *model;
    Controller *controller;

};

#endif //FOGLIODICALCOLO_VIEW_H
