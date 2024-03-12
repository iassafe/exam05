#include"ATarget.hpp"

ATarget::ATarget(const std::string& type){
}

ATarget::~ATarget(){
}

const std::string& ATarget::getType() const{
    return(this->type);
}

void ATarget::getHitBySpell(const ASpell &obj) const{
    std::cout << this->type << " has been "<< obj.getEffects() << "!" << std::endl;
}