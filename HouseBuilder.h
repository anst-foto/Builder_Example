#pragma once

#include "House.h"

using namespace std;

class HouseBuilder {
public:
    HouseBuilder() {}

    House* buildWoodHouse() {
        vector<Wall*> walls = {new WoodWall(), new WoodWall(), new WoodWall(), new WoodWall()};
        House* house = new House(new WoodFoundation(), walls, new WoodRoof());

        return house;
    }

    House* buildStoneHouse() {
        vector<Wall*> walls = {new StoneWall(), new StoneWall(), new StoneWall(), new StoneWall()};
        House* house = new House(new StoneFoundation(), walls, new StoneRoof());

        return house;
    }
};
