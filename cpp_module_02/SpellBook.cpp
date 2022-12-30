#include "SpellBook.hpp"
SpellBook::SpellBook(){}
SpellBook::~SpellBook(){}

void         SpellBook::learnSpell(const ASpell* spell){
    for (size_t i = 0; i < this->spells.size(); i++)
        if (this->spells[i]->getName() == spell->getName())
        {
            return;
        }
        this->spells.push_back(spell->clone());
}
void         SpellBook::forgetSpell(const std::string& name){
    for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != this->spells.end(); it++){
        if ((*it)->getName() == name){
            delete *it;
            this->spells.erase(it);
            return;
        }
    }
}
ASpell*      SpellBook::createSpell(std::string const &name){
    for(size_t i = 0; i < this->spells.size(); i++)
    if (this->spells[i]->getName() == name)
        return this->spells[i];
    return 0;
}