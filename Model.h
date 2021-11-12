#ifndef FOGLIODICALCOLO_MODEL_H
#define FOGLIODICALCOLO_MODEL_H

#include <list>
#include "Subject.h"

class Model : public Subject {
public:
    Model();

    float getValue(const int i, const int j) const {
        return data[i][j];
    }

    void setValue(const int i, const int j, float value);

    virtual void addObserver(Observer *o) override;

    virtual void removeObserver(Observer *o) override;

    virtual void notify() override;

private:
    float data[4][8];
    std::list<Observer *> observers;
};

#endif //FOGLIODICALCOLO_MODEL_H
