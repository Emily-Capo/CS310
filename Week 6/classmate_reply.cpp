#include <iostream>

int main() {

    std::cout << "Hello, everyone!" << std::endl;
    std::cout << "This program contains two errors specifically relating to the enum type." << std::endl;
    std::cout << "Can you find them?" << std::endl;

    enum healthLevels{ // Error fix used () insteasd of {}
        CRITICAL = 25,
        INJURED = 50,
        HEALTHY = 75
};

    enum creatureDifficulty {
        EASY = 1,
        MEDIUM,
        HARD,
        EXTREME
    };

    enum creatureType { // Error fix. used 'creatureType' and 'WILD' that wasn't delcared and 
    WILD,
    TAMED,
    LEGENDARY
};

creatureType first_creature = WILD;


}
