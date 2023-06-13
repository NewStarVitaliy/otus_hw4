#pragma once

#include <string>

#include "astnode.hpp"

class Div : public ASTNode {
  public:
    Div(ASTNode *lhs, ASTNode *rhs)
        : ASTNode( "/", lhs, rhs)
        ,m_lhs(lhs)
        ,m_rhs(rhs)
         {}

  private:

    ASTNode *m_lhs;
    ASTNode *m_rhs;
};