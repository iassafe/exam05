#include"Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title){
    std::cout << this->name << ": This looks like another boring day." << std::endl;

}

Warlock::~Warlock(){
    std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const{
    return(this->name);
}

const std::string& Warlock::getTitle() const{
    return(this->title);
}

void Warlock::setTitle(const std::string& title){
    this->title = title;
}

void Warlock::introduce() const{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!"<< std::endl;
}

void Warlock::learnSpell(ASpell *ptr){
    if(ptr)
        this->my_map.insert(std::pair<std::string, ASpell *>(ptr->getName(), ptr->clone()));
}

void Warlock::forgetSpell(std::string name){
    std::map<std::string, ASpell *>::iterator it = this->my_map.find(name);
    if(it != this->my_map.end())
        delete it->second;
    this->my_map.erase(name);
}

void Warlock::launchSpell(std::string name, ATarget const &obj){
    ASpell *spell = this->my_map[name];
    if(spell)
        spell->launch(obj);
}