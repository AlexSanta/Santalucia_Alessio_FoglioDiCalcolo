#ifndef FOGLIODICALCOLO_COUNTER_H
#define FOGLIODICALCOLO_COUNTER_H

#include "Observer.h"

class Counter : public Observer {
public:

    virtual void update() override { count++; }

    int getCount() const { return count; }

private:
    int count = 0;
};

#endif //FOGLIODICALCOLO_COUNTER_H
