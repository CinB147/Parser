#include <iostream>
#include "lexer.h"

std::string tokenTypeToString(TokenType type) {
    switch (type) {
        case TokenType::Plus:        return "Plus";
        case TokenType::Star:        return "Star";
        case TokenType::OpenParen:   return "OpenParen";
        case TokenType::CloseParen:  return "CloseParen";
        case TokenType::Dot:         return "Dot";
        case TokenType::OpenBrace:   return "OpenBrace";
        case TokenType::CloseBrace:  return "CloseBrace";
        case TokenType::Letter:     return "Letter";
        case TokenType::Number:      return "Number";
        case TokenType::EndOfFile:   return "EndOfFile";
        default:                     return "Unknown";
    }
}


int main() {
    std::string input = "lo* could''.{3}";

    try {
        lexer lex(input);
        const std::vector<Token>& tokens = lex.getToken();

        // Iterate over and print tokens
        for (const auto& it : tokens) {
            std::cout << "Token Type: " << tokenTypeToString(it.type)
                      << ", Value: " << it.value << std::endl;
        }
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
