#pragma once

#include "House.h"

using namespace std;

class HouseBuilder2 {
private:
    House* _house;

public:
    HouseBuilder2() {
        _house = new House();
    }

    void setFoundation(string material) {
        if(material == "wood") {
            _house->setFoundation(new WoodFoundation());
        } else if(material == "stone") {
            _house->setFoundation(new StoneFoundation());
        }
    }

    void setWall(string material) {
        vector<Wall*> walls;

        if(material == "wood") {
            for (int i = 0; i < 5; i++) {
                walls.push_back(new WoodWall());
            }
        } else if(material == "stone") {
            for (int i = 0; i < 5; i++) {
                walls.push_back(new StoneWall());
            }
        }

        _house->setWalls(walls);
    }

    void setRoof(string material) {
        if(material == "wood") {
            _house->setRoof(new WoodRoof());
        } else if(material == "stone") {
            _house->setRoof(new StoneRoof());
        }
    }

    House* build() {
        return _house;
    }
};
