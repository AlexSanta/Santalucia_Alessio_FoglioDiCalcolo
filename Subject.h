#ifndef FOGLIODICALCOLO_SUBJECT_H
#define FOGLIODICALCOLO_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual ~Subject() {}
    virtual void notify() = 0;
    virtual void addObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
};

#endif //FOGLIODICALCOLO_SUBJECT_H
