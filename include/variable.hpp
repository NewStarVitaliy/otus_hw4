#pragma once

#include <string>

#include "astnode.hpp"

class Variable : public ASTNode {
  public:
    inline Variable(std::string val)
        : ASTNode(val) {}

    //int value() const { return val_;
};
