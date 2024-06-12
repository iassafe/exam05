#include"SpellBook.hpp"

SpellBook::SpellBook(){

}

SpellBook::~SpellBook(){

}

void SpellBook::learnSpell(ASpell *spell){
    if(spell)
        this->book[spell->getName()] = spell;
}

void SpellBook::forgetSpell(std::string const &name){
    this->book.erase(name);
}

ASpell* SpellBook::createSpell(std::string const &name){
    if(this->book.find(name) != this->book.end())
        return (this->book[name]);
    return(NULL);
}
