#include"ATarget.hpp"

ATarget::ATarget(std::string const &type){
    this->type = type;
}

ATarget::~ATarget(){

}

ATarget::ATarget(){

}

ATarget::ATarget(ATarget const &obj){
    *this = obj;
}

ATarget &ATarget::operator=(ATarget const &obj){
    if (this != &obj)
        this->type = obj.getType();
    return (*this);
}

std::string const &ATarget::getType() const{
    return (this->type);
}

void ATarget::getHitBySpell(ASpell const &spell) const{
    std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}
