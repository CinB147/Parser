//
// Created by Alice on 31/01/2024.
//

#ifndef LAB1_NODE_H
#define LAB1_NODE_H

#include <vector>
#include <string>

struct EvalResult{

};


class node {
    EvalResult virtual evaluate(const std::string& input) = 0;
    std::vector<node*>children;
    virtual ~node(){
        for (auto& operand : children) {
            delete operand;
        }
    }

};


#endif //LAB1_NODE_H
