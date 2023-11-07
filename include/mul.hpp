#pragma once

#include <string>

#include "astnode.hpp"

class Mul : public ASTNode {
  public:
    inline Mul(ASTNode *lhs, ASTNode *rhs)
        : ASTNode( "*", lhs, rhs)
         {}

  private:
    ASTNode *m_lhs;
    ASTNode *m_rhs;
};