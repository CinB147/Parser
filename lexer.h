//
// Created by Alice on 29/01/2024.
//

#ifndef LAB1_LEXER_H
#define LAB1_LEXER_H

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

enum class TokenType {
    Plus, Star, OpenParen, CloseParen, Dot, OpenBrace, CloseBrace,
    Letter, Number, Unknown, EndOfFile
};

struct Token {
    TokenType type;
    std::string value;
};

class lexer {
private:
    std::string input;
    size_t curr = 0;
    std::vector<Token>tokens;

    bool isEnd();
    char advance();
    void addToken(TokenType type, const std::string& val);
    void tokenize();
    char peek();

public:
    explicit lexer(const std::string& input) : input(input) {
        tokenize();
    }
    [[nodiscard]] const std::vector<Token>& getToken() const;

};


#endif //LAB1_LEXER_H
