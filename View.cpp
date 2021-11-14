#include "View.h"

View::View(Model *m, Controller *c, QWidget *parent) : QMainWindow(parent), ui(new ViewWindow()), model(m),
                                                       controller(c) {
    model->addObserver(this);
    ui->setupUi(this);
}

View::~View() {
    model->removeObserver(this);
    delete ui;
}