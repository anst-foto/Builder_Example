#pragma once

#include <string>

using namespace std;

class Roof {
private:
    string _material;

protected:
    Roof(string material)
        : _material(material) {
    }

public:
    string getMaterial() {
        return _material;
    }
};

class WoodRoof : public Roof {
public:
    WoodRoof()
        : Roof("wood") {}
};

class StoneRoof : public Roof {
public:
    StoneRoof()
        : Roof("stone") {}
};