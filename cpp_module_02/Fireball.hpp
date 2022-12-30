#ifndef Fireball_HPP
#define Fireball_HPP
#include "ASpell.hpp"
class Fireball : public ASpell{
    public:
    Fireball();
    virtual ~Fireball();

    Fireball* clone() const;
};
#endif