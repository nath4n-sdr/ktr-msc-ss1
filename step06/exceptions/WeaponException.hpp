/*
** EPITECH PROJECT, 2022
** WeaponException
** File description:
** WeaponException
*/

#ifndef WEAPONEXCEPTION_HPP_
#define WEAPONEXCEPTION_HPP_

#include <exception>
#include <string>

class WeaponException : public std::exception
{

public:
    explicit WeaponException(const std::string message)
    {
        _message = message;
    };
    const char *what() const noexcept override
    {
        return _message.c_str();
    }

protected:
    std::string _message;
};

#endif /* !WEAPONEXCEPTION_HPP_ */
