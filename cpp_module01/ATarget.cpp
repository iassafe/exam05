#include"ATarget.hpp"

ATarget::ATarget(std::string const &type){
    this->type = type;
}

ATarget::~ATarget(){ 
}

std::string const &ATarget::getType(){
    return (this->type);
}


void ATarget::getHitBySpell(ASpell const &Spell){
    std::cout << this->type << " has been " << Spell.getEffects() << "\n";
}