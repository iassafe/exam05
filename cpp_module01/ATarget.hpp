#ifndef ATARGET_HPP
#define ATARGET_HPP
#include<iostream>
#include"ASpell.hpp"
class ASpell;
class ATarget{
    private:
        std::string type;
    public:
        ATarget(std::string const &type);
        virtual ~ATarget();

        const std::string& getType() const;
        virtual ATarget* clone()const=0;

        void getHitBySpell(const ASpell &obj) const;

};

#endif