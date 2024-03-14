#include"ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects):name(name), effects(effects){
}

ASpell::~ASpell(){
}

const std::string& ASpell::getName() const{
    return(this->name);
}

const std::string&  ASpell::getEffects() const{
    return(this->effects);
}

void ASpell::launch(ATarget const &obj)const{
    obj.getHitBySpell(*this);
}