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
    House(Foundation* foundation, vector<Wall*> walls, Roof* roof) {
        _foundation = foundation;
        for (auto wall : walls) {
            _walls.push_back(wall);
        }
        _roof = roof;
    }

    Foundation * getFoundation() const {
        return _foundation;
    }

    vector<Wall*> getWalls() const {
        return _walls;
    }

    Roof * getRoof() const {
        return _roof;
    }
};

