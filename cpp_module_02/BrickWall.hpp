#ifndef BrickWall_HPP
#define BrickWall_HPP
#include "ATarget.hpp"
class BrickWall : public ATarget{
    public:
    BrickWall();
    virtual ~BrickWall();

    BrickWall* clone() const;
};
#endif