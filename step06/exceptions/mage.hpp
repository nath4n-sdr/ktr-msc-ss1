/*
** EPITECH PROJECT, 2022
** mage
** File description:
** mage
*/
#include "character.hpp"
#include "WeaponException.hpp"

#ifndef MAGE_HPP_
#define MAGE_HPP_

class Mage : public Character
{
public:
    Mage(std::string const &name = "", std::string RPGClasss = "Mage", int life = 70, int agility = 10, int strength = 3, int wit = 10)
    {
        _name = name;
        _RPGClass = RPGClasss;
        _life = life;
        _agility = agility;
        _strength = strength;
        _wit = wit;
        std::cout << _name << ": "
                  << "May the gods be with me.\n";
    };
    const void attack(std::string weapon)
    {
        if (weapon != "")
        {

            if (weapon == "magic" || weapon == "wand")
            {
                std::cout << _name << ": "
                          << "Rrrrrrrrr....\n";
                std::cout << _name << ": "
                          << "Feel the power of my " << weapon << "!\n";
            }
            else
            {
                throw WeaponException(_name + ": I don't need this stupid " + weapon + "! Don't misjudge my powers!");
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
                  << "moves forward furtively.\n";
    };
    void moveRight()
    {
        std::cout << _name << ": "
                  << "moves right furtively.\n";
    };
    void moveBack()
    {
        std::cout << _name << ": "
                  << "moves back furtively.\n";
    };
    void moveLeft()
    {
        std::cout << _name << ": "
                  << "moves left furtively\n";
    };
};

#endif /* !MAGE_HPP_ */
