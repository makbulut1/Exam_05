#include "ATarget.hpp"

ATarget::ATarget(){}
ATarget::ATarget(const std::string& type) : type(type){}
ATarget::~ATarget(){}
ATarget::ATarget(const ATarget& other): type(other.type){}
ATarget& ATarget::operator=(const ATarget& other){
    this->type = other.type;
    return (*this);
}

const std::string& ATarget::getType() const{
    return this->type;
}

void         ATarget::getHitBySpell(const ASpell& spell) const{
    std::cout << this->type + " has been " + spell.getEffects() + "!" << std::endl;
}