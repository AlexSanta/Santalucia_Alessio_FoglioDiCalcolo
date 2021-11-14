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

    int getIndex() const { return index; }

    int getNce() const { return nce; }

    int getNcu() const { return ncu; }

    void setValue(const int i, const int j, float value);

    void setIndex(const int ind);

    virtual void addObserver(Observer *o) override;

    virtual void removeObserver(Observer *o) override;

    virtual void notify() override;

private:
    float data[4][8];
    std::list<Observer *> observers;
    const int nce; //numero colonne modificabili dall'utente
    const int ncu; //numero colonne non modificabili dall'utente
    int index; //numero ultima riga della cella modificata dall'utente
};

#endif //FOGLIODICALCOLO_MODEL_H
