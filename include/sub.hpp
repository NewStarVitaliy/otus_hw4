#pragma once

#include <string>

#include "astnode.hpp"

class Sub : public ASTNode {
  public:
    Sub(ASTNode *lhs, ASTNode *rhs)
        : ASTNode( "-", lhs, rhs)
         {}

  private:
    ASTNode *m_lhs;
    ASTNode *m_rhs;
};