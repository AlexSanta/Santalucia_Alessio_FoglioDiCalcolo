#include <QtWidgets/QMessageBox>
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

void View::update() {
    int index = model->getIndex();
    int nce = model->getNce();
    int ncu = model->getNcu();
    for (int i = 0; i < ncu; i++) {
        ui->tW->item(index, i + nce)->setText(QString::number(model->getValue(index, i + nce)));
    }
}

void View::onCellChanged(int i, int j) {
    if (j < model->getNce()) {
        if (!ui->tW->item(i, j)->text().toFloat() && ui->tW->item(i, j)->text() != "0") {
            QMessageBox messageBox;
            messageBox.critical(this, "Errore", "Puoi inserire solo numeri!");
            ui->tW->item(i, j)->setText(QString::number(model->getValue(i, j)));
        } else {
            QString qLab = ui->tW->item(i, j)->text();
            controller->modify(i, j, qLab);
        }
    }
}