#pragma once

#include <string>

using namespace std;

class Wall {
private:
    string _material;

protected:
    Wall(string material)
        : _material(material) {
    }

public:
    string getMaterial() {
        return _material;
    }
};

class WoodWall : public Wall {
public:
    WoodWall() : Wall("wood") {}
};

class StoneWall : public Wall {
public:
    StoneWall() : Wall("stone") {}
};