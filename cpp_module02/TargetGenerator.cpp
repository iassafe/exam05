#include"TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){

}

TargetGenerator::~TargetGenerator(){

}

void TargetGenerator::learnTargetType(ATarget *target){
    if(target)
        this->generator[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &type){
    this->generator.erase(type);
}

ATarget* TargetGenerator::createTarget(std::string const &type){
    if(this->generator.find(type) != this->generator.end())
        return (this->generator[type]);
    return(NULL);
}
