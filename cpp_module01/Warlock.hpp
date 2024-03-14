#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include<iostream>
#include"ASpell.hpp"
class ASpell;
#include<map>

class Warlock{
    private:
        std::string name;
        std::string title;

        std::map<std::string, ASpell *> my_map;
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        const std::string& getName() const;
        const std::string&  getTitle() const;
        void setTitle(const std::string& title);
    
        void introduce() const;

        void learnSpell(ASpell *ptr);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget const &obj);

};

#endif