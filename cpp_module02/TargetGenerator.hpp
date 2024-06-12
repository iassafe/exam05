#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include<iostream>
#include"ATarget.hpp"
class ATarget;
#include<map>

class TargetGenerator{
    private:
        std::map<std::string, ATarget *> generator;
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const &type);

};

#endif