//
// Created by Alice on 29/01/2024.
//

#include "lexer.h"

bool lexer::isEnd() {
    return curr >= input.length();
}

char lexer::advance() {
    return input[curr++];
}

void lexer::addToken(TokenType type, const std::string &val = "") {

    tokens.push_back({type, val});
}

void lexer::tokenize() {
    while (!isEnd()) {
        char c = advance();
        if (std::isdigit(c)) {
            addToken(TokenType::Number, std::string(1, c));
        } else if (std::isalpha(c) || std::isspace(c)) {
            addToken(TokenType::Letter, std::string(1, c));
        } else {
            switch (c) {
                case '+': addToken(TokenType::Plus); break;
                case '*': addToken(TokenType::Star); break;
                case '(': addToken(TokenType::OpenParen); break;
                case ')': addToken(TokenType::CloseParen); break;
                case '.': addToken(TokenType::Dot); break;
                case '{': addToken(TokenType::OpenBrace); break;
                case '}': addToken(TokenType::CloseBrace); break;
                default:
                    addToken(TokenType::Unknown, std::string(1, c));
                    break;
            }
        }
    }
    addToken(TokenType::EndOfFile);

}

char lexer::peek() {
    if (isEnd()) return '\0';
    return input[curr];
}



const std::vector<Token> &lexer::getToken() const {
    return tokens;
}

