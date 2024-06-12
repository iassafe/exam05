#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include<iostream>
#include"ASpell.hpp"
class ASpell;
#include<map>

class SpellBook{
    private:
        std::map<std::string, ASpell *> book;
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &name);
        ASpell* createSpell(std::string const &name);

};

#endif