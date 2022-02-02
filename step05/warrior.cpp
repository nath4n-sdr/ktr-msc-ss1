#include "character.hpp"
#include "warrior.hpp"

int main(int argc, char **argv)
{

    Character *warrior = new Warrior(argv[1] ? argv[1] : "Jean-Luc");
    std::cout << warrior->getLife() << "\n";
    warrior->attack("hammer");
    warrior->moveBack();
    return 0;
}
