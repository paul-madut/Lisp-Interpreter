#include "Token.h"
#include <string>
#include <iostream>

Token::Token(std::string type, int value)
{
    type = type;
    value = value;

}

std::string Token::toString() const {
    if(value){
        return(type + ":" + std::to_string(value));
        }
    return(type);
}