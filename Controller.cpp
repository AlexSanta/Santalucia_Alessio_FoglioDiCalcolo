#include "Controller.h"

Controller::Controller(Model *m) : model(m) {
    nce = model->getNce();
    ncu = model->getNcu();
}