/*
** EPITECH PROJECT, 2022
** warrior
** File description:
** warrior
*/
#include "character.hpp"

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
        if (weapon == "hammer" || weapon == "sword")
        {
            std::cout << _name << ": "
                      << "Rrrrrrrrr....\n";
            std::cout << _name << ": "
                      << "I'll crush you with my " << weapon << "!\n";
        }
    };
};

#endif /* !WARRIOR_HPP_ */
