#include "Controller.h"

Controller::Controller(Model *m) : model(m) {
    nce = model->getNce();
    ncu = model->getNcu();
}

void Controller::modify(const int i, const int j, const QString qLab) {

}

float Controller::sum(const float *operands) {
    float sumValue = 0;
    for (int i = 0; i < nce; i++)
        sumValue += operands[i];
    return sumValue;
}

float Controller::mean(const float sumValue) {
    return sumValue / nce;
}

float Controller::min(const float *operands) {
    float minValue = operands[0];
    for (int i = 1; i < nce; i++)
        if (operands[i] < minValue)
            minValue = operands[i];
    return minValue;
}

float Controller::max(const float *operands) {
    float maxValue = operands[0];
    for (int i = 1; i < nce; i++)
        if (operands[i] > maxValue)
            maxValue = operands[i];
    return maxValue;
}

