/*
** EPITECH PROJECT, 2022
** movable
** File description:
** movable
*/

#ifndef MOVABLE_HPP_
#define MOVABLE_HPP_

class Movable
{
public:
    virtual void moveRight() = 0;
    virtual void moveLeft() = 0;
    virtual void moveForward() = 0;
    virtual void moveBack() = 0;
};

#endif /* !MOVABLE_HPP_ */
