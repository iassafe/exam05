#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include<iostream>
#include"ASpell.hpp"
#include"ATarget.hpp"
#include<map>
class ASpell;
class ATarget;

class Warlock{
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell *> arr;
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        std::string const &getName() const;
        std::string const &getTitle() const;
        void  setTitle(std::string const &title);
        void introduce() const;
        void learnSpell(ASpell *Spell);
        void forgetSpell(std::string const &name);
        void launchSpell(std::string const &name, ATarget& const Target);

};

#endif