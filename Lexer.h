#ifndef LEXER_H
#define LEXER_H
#include <string>


class Lexer{
    private:
        std::string text;
        int pos;
        char current_char;
        
    public:
        Lexer(std::string text);
        void advance();
};


#endif