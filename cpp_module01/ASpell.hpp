#ifndef ASPELL_HPP
#define ASPELL_HPP
#include<iostream>
#include"ATarget.hpp"
class ATarget;

class ASpell{
    private:
        std::string name;
        std::string effects;
    public:
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();

        const std::string& getName() const;
        const std::string&  getEffects() const;
        virtual ASpell* clone()const=0;
        void launch(const ATarget& obj)const;

};

#endif