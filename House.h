#pragma once

#include <vector>

#include "Foundation.h"
#include "Wall.h"
#include "Roof.h"

using namespace std;

class House {
private:
    Foundation* _foundation;
    vector<Wall*> _walls;
    Roof* _roof;

public:
    House() {}

    House(Foundation* foundation, vector<Wall*> walls, Roof* roof) {
        _foundation = foundation;
        for (auto wall : walls) {
            _walls.push_back(wall);
        }
        _roof = roof;
    }

    void setFoundation(Foundation *foundation) {
        _foundation = foundation;
    }
    Foundation * getFoundation() const {
        return _foundation;
    }

    void setWalls(const vector<Wall *> &walls) {
        _walls = walls;
    }
    vector<Wall*> getWalls() const {
        return _walls;
    }

    void setRoof(Roof *roof) {
        _roof = roof;
    }
    Roof * getRoof() const {
        return _roof;
    }
};

