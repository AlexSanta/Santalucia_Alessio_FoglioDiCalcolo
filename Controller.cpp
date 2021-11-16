#include "Controller.h"

Controller::Controller(Model *m) : model(m) {
    nce = model->getNce();
    ncu = model->getNcu();
}

void Controller::modify(const int i, const int j, const QString qLab) {

}

float Controller::sum(const float *operands) {
    return 0;
}

float Controller::mean(const float sumValue) {
    return 0;
}

float Controller::min(const float *operands) {
    return 0;
}

float Controller::max(const float *operands) {
    return 0;
}

