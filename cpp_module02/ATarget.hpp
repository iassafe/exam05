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

        ATarget();
        ATarget(ATarget const &obj);
        ATarget &operator=(ATarget const &obj);

        std::string const &getType() const;

        virtual ATarget *clone() const=0;
        void getHitBySpell(ASpell const &spell) const;

};

#endif