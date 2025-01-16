#include <iostream>

#include "HouseBuilder1.h"
#include "HouseBuilder2.h"

using namespace std;

void PrintHouse(House* house);

int main() {
    auto builder = new HouseBuilder1();

    auto woodHouse = builder->buildWoodHouse();
    PrintHouse(woodHouse);

    auto stoneHouse = builder->buildStoneHouse();
    PrintHouse(stoneHouse);

    auto houseBuilder2 = new HouseBuilder2();
    houseBuilder2->setFoundation("stone");
    houseBuilder2->setWall("wood");
    houseBuilder2->setRoof("stone");
    auto house3 = houseBuilder2->build();
    PrintHouse(house3);

    return 0;
}

void PrintHouse(House* house) {
    cout << "--- --- ---" << endl;
    cout << "Foundation: " << house->getFoundation()->getMaterial() << endl;
    cout << "Wall: " << house->getWalls().at(0)->getMaterial() << endl;
    cout << "Roof: " << house->getRoof()->getMaterial() << endl;
    cout << "--- --- ---" << endl;
}