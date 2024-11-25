#include"ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects){
    this->name = name;
    this->effects = effects;
}

ASpell::~ASpell(){

}

ASpell::ASpell(){

}

ASpell::ASpell(ASpell const &obj){
    *this = obj;
}

ASpell &ASpell::operator=(ASpell const &obj){
    if(this != &obj){
        this->name = obj.getName();
        this->effects = obj.getEffects();
    }
    return (*this);
}

std::string const &ASpell::getName() const{
    return (this->name);
}

std::string const &ASpell::getEffects() const{
    return (this->effects);
}


void ASpell::launch(ATarget const &target) const{
    target.getHitBySpell(*this);
}