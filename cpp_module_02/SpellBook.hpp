#ifndef Spellbook_hpp
#define Spellbook_hpp
#include "iostream"
#include "vector"
#include "ASpell.hpp"
class SpellBook{
    private:
    std::vector<ASpell*> spells;
    public:
    SpellBook();
    ~SpellBook();

    void         learnSpell(const ASpell* spell) ;
    void         forgetSpell(const std::string& name) ;
    ASpell*      createSpell(std::string const &spell);
};
#endif