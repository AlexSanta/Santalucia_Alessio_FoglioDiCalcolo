#ifndef FOGLIODICALCOLO_CONTROLLER_H
#define FOGLIODICALCOLO_CONTROLLER_H

#include <QtCore/QString>
#include "Model.h"

class Controller {
public:
    explicit Controller(Model *m) : model(m) {}

    void modify(const int i, const int j, const QString qLab);

    float sum(const float *operands);

    float mean(const float sumValue);

    float min(const float *operands);

    float max(const float *operands);

private:
    Model *model;
};

#endif //FOGLIODICALCOLO_CONTROLLER_H
