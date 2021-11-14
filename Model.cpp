#include "Model.h"

Model::Model() : nce(4), ncu(4), index(0) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 8; j++)
            data[i][j] = 0;
}

void Model::notify() {
    for (Observer *observer : observers)
        observer->update();
}

void Model::addObserver(Observer *o) {
    observers.push_back(o);
}

void Model::removeObserver(Observer *o) {
    observers.remove(o);
}

void Model::setValue(const int i, const int j, float value) {
    data[i][j] = value;
}

void Model::setIndex(const int ind) {
    index = ind;
}