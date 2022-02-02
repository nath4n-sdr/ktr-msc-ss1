#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstring>

class Character
{
public:
    Character(std::string const &name = "", std::string RPGClasss = "", int life = 50, int agility = 2, int strength = 2, int wit = 2){};
    virtual ~Character(){};
    virtual const std::string getName() const { return _name; };
    virtual const std::string getRPGClass() const { return _RPGClass; };
    virtual const int getLife() const { return _life; };
    virtual const int getAgility() const { return _agility; };
    virtual const int getStrength() const { return _strength; };
    virtual const int getWit() const { return _wit; };
    virtual const void attack(std::string weapon) const { std::cout << _name << ": "
                                                                    << "Rrrrrrrrr....\n"; };

protected:
    std::string _name;
    std::string _RPGClass;
    int _life;
    int _agility;
    int _strength;
    int _wit;

private:
};

class TestCharacter : public Character
{
public:
    TestCharacter(std::string const &name = "", std::string RPGClasss = "Character", int life = 50, int agility = 2, int strength = 2, int wit = 2)
    {
        _name = name;
        _RPGClass = RPGClasss;
        _life = life;
        _agility = agility;
        _strength = strength;
        _wit = wit;
    };
};
#endif /* !CHARACTER_HPP_ */
