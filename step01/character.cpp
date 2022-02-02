#include "character.hpp"

int main(int argc, char **argv)
{

  Character *perso = new TestCharacter(argv[1] ? argv[1] : "Jean-Luc");

  std::cout << perso->getName() << "\n";
  std::cout << perso->getLife() << "\n";
  std::cout << perso->getAgility() << "\n";
  std::cout << perso->getStrength() << "\n";
  std::cout << perso->getWit() << "\n";
  std::cout << perso->getRPGClass() << "\n";
  perso->attack(" my weapon ");
  return 0;
}
