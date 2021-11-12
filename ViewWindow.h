#ifndef FOGLIODICALCOLO_VIEWWINDOW_H
#define FOGLIODICALCOLO_VIEWWINDOW_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QMainWindow>

QT_BEGIN_NAMESPACE

class ViewWindow {
public:
    QWidget *ViewWidget;
    QTableWidget *tW;

    void setupUi(QMainWindow *View) {
        ViewWidget = new QWidget(View);
        tW = new QTableWidget(4, 8, ViewWidget);

        for (int i = 0; i <= 3; i++) {
            for (int j = 0; j <= 3; j++) {
                QTableWidgetItem *item = new QTableWidgetItem("0");
                tW->setItem(i, j, item);
            }
        }

        for (int i = 0; i <= 3; i++) {
            for (int j = 4; j <= 7; j++) {
                QTableWidgetItem *item = new QTableWidgetItem("0");
                item->setFlags(item->flags() ^ Qt::ItemIsEditable); //cella non modificabile dall'utente
                tW->setItem(i, j, item);
                tW->item(i, j)->setBackground(Qt::lightGray);
            }
        }

        tW->setHorizontalHeaderLabels({"A", "B", "C", "D", "Somma", "Media", "Min", "Max"});
        tW->setVerticalHeaderLabels({"A", "B", "C", "D"});
        View->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint); //finestra non espandibile
        View->setWindowTitle("Foglio di calcolo");
        View->setCentralWidget(ViewWidget);

        QObject::connect(tW, SIGNAL(cellChanged(int, int)), View, SLOT(onCellChanged(int, int)));
    }
};

QT_END_NAMESPACE

#endif //FOGLIODICALCOLO_VIEWWINDOW_H
