#ifndef TOKEN_H
#define TOKEN_H
#include <string>


class Token{
    private:
        std::string type;
        int value;

    public:
        Token(std::string type, int value);
        std::string toString() const;
};


#endif