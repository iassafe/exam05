#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include<iostream>

class Warlock{
    private:
        std::string name;
        std::string title;
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        const std::string& getName() const;
        const std::string&  getTitle() const;
        void setTitle(const std::string& title);
        

        void introduce() const;

};

#endif