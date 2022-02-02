/*
** EPITECH PROJECT, 2022
** warrior
** File description:
** warrior
*/
#include "character.hpp"
#include "WeaponException.hpp"

#ifndef WARRIOR_HPP_
#define WARRIOR_HPP_

class Warrior : public Character
{
public:
    Warrior(std::string const &name = "", std::string RPGClasss = "Warrior", int life = 100, int agility = 8, int strength = 10, int wit = 3)
    {
        _name = name;
        _RPGClass = RPGClasss;
        _life = life;
        _agility = agility;
        _strength = strength;
        _wit = wit;
        std::cout << _name << ": "
                  << "My name will go down in history!\n";
    };
    const void attack(std::string weapon)
    {
        if (weapon != "")
        {

            if (weapon == "sword" || weapon == "hammer")
            {
                std::cout << _name << ": "
                          << "Rrrrrrrrr....\n";
                std::cout << _name << ": "
                          << "Feel the power of my " << weapon << "!\n";
            }
            else
            {
                throw WeaponException(_name + ": A " + weapon + "?? What should I do with this?!");
            }
        }
        else
        {
            throw WeaponException(_name + ": I refuse to fight with my bare hands.");
        }
    };
    void moveForward()
    {
        std::cout << _name << ": "
                  << "moves forward like a bad boy.\n";
    };
    void moveRight()
    {
        std::cout << _name << ": "
                  << "moves right like a bad boy.\n";
    };
    void moveBack()
    {
        std::cout << _name << ": "
                  << "moves back like a bad boy.\n";
    };
    void moveLeft()
    {
        std::cout << _name << ": "
                  << "moves left like a bad boy.\n";
    };
};

#endif /* !WARRIOR_HPP_ */
