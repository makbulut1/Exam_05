#ifndef Fwoosh_HPP
#define Fwoosh_HPP
#include "ASpell.hpp"
class Fwoosh : public ASpell{
    public:
    Fwoosh();
    virtual ~Fwoosh();

    Fwoosh* clone() const;
};
#endif