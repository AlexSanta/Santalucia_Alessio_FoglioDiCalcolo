#ifndef FOGLIODICALCOLO_OBSERVER_H
#define FOGLIODICALCOLO_OBSERVER_H

class Observer {
public:
    virtual ~Observer() {}
    virtual	void update() = 0;
};

#endif //FOGLIODICALCOLO_OBSERVER_H
