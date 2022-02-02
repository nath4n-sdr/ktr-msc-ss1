#include "character.hpp"
#include "mage.hpp"

int main(int argc, char **argv)
{

    Character *mage = new Mage(argv[1] ? argv[1] : "Jean-Luc");
    std::cout << mage->getLife() << "\n";
    mage->tryToAttack("hammer");
    mage->tryToAttack("magic");
    mage->moveRight();
    mage->unsheathe();
    return 0;
}