#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->_name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(){}

Warlock::Warlock(const Warlock&copy): _name(copy._name), _title(copy._title){}

Warlock& Warlock::operator=(const Warlock&copy){
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_title = copy._title;
    }
    return *this;
}

const std::string& Warlock::getName() const {
    return this->_name;
}

const std::string& Warlock::getTitle() const {
    return this->_title;
}

void Warlock::setTitle(const std::string& title){
    this->_title = title;
}

void Warlock::introduce() const{
    std::cout << this->_name << ": I am " << this->_name << " ," << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(const ASpell*spell){
    _spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string &name){
    _spellbook.forgetSpell(name);
}

void Warlock::launchSpell(const std::string &name, const ATarget &target){
    ASpell *spell = _spellbook.createSpell(name);
    if (spell)
    {
        spell->launch(target);
        delete spell;
    }
}