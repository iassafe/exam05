#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include<iostream>
#include"ASpell.hpp"
class ASpell;
#include"ATarget.hpp"
class ATarget;
#include<map>
#include"SpellBook.hpp"
class SpellBook;

class Warlock{
    private:
        std::string name;
        std::string title;
        SpellBook book;
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void setTitle(std::string const &title);

        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget const &target);
};

#endif