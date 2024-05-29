#ifndef ASPELL_HPP
#define ASPELL_HPP
#include<iostream>
#include"ATarget.hpp"
class ATarget;

class ASpell{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell(std::string const &name, std::string const &effects);
        virtual~ASpell();
        std::string const &getName() const;
        std::string const &getEffects() const;
        void launch(ATarget &Target) const;

        virtual ASpell *clone() const=0;


};


#endif