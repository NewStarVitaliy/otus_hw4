#pragma once

#include <string>

#include "astnode.hpp"

class Add : public ASTNode {
  public:
    inline Add(ASTNode *lhs, ASTNode *rhs)
        : ASTNode( "+", lhs, rhs)
         {}
};