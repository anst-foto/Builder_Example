#include <iostream>

#include "HouseBuilder.h"

using namespace std;

void PrintHouse(House* house);

int main() {
    auto builder = new HouseBuilder();

    auto woodHouse = builder->buildWoodHouse();
    PrintHouse(woodHouse);

    auto stoneHouse = builder->buildStoneHouse();
    PrintHouse(stoneHouse);

    return 0;
}

void PrintHouse(House* house) {
    cout << "--- --- ---" << endl;
    cout << "Foundation: " << house->getFoundation()->getMaterial() << endl;
    cout << "Wall: " << house->getWalls().at(0)->getMaterial() << endl;
    cout << "Roof: " << house->getRoof()->getMaterial() << endl;
    cout << "--- --- ---" << endl;
}