#ifndef ATARGET_HPP
#define ATARGET_HPP
#include<iostream>
#include"ASpell.hpp"
class ASpell;


class ATarget{
    protected:
        std::string type;
    public:
        ATarget(std::string const &type);
        virtual~ATarget();
        std::string const &getType();

        virtual ATarget *clone() const=0;
        void getHitBySpell(ASpell const &Spell);

};



#endif