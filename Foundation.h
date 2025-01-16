#pragma once

#include <string>

using namespace std;

class Foundation {
private:
    string _material;

protected:
    Foundation(string material)
        : _material(material) {
    }

public:
    string getMaterial() {
        return _material;
    }
};

class WoodFoundation : public Foundation {
public:
    WoodFoundation()
        : Foundation("wood") {}
};

class StoneFoundation : public Foundation {
public:
    StoneFoundation()
        : Foundation("stone") {}
};