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

        ASpell();
        ASpell(ASpell const &obj);
        ASpell &operator=(ASpell const &obj);

        std::string const &getName() const;
        std::string const &getEffects() const;

        virtual ASpell *clone() const=0;
        void launch(ATarget const &target) const;

};

#endif