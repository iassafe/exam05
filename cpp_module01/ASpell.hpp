#ifndef ASPELL_HPP
#define ASPELL_HPP
#include<iostream>

class ASpell{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell(std::string const &name, std::string const &effects);
        ~ASpell();

        std::string getName() const;
        std::string getEffects() const;

        virtual ASpell* clone() const=0;
};

#endif