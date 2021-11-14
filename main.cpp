#include <QtWidgets/QApplication>
#include "View.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    Model *model = new Model;
    Controller *controller = new Controller(model);
    View view(model, controller);
    view.show();
    return app.exec();
}
