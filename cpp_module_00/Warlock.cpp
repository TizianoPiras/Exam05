#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::~Warlock(){
    std::cout << this->_name << ": My job is done!" << std::endl;
}

Warlock::Warlock(const std::string &name, const std::string &title): _name(name), _title(title){
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& copy): _name(copy._name), _title(copy._title){}

Warlock& Warlock::operator=(const Warlock&copy){
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_title = copy._title;
    }
    return (*this);
}

const std::string& Warlock::getName() const{
    return this->_name;
}

const std::string& Warlock::getTitle() const{
    return this->_title;
}

void Warlock::setTitle(const std::string& title) {
    this->_title = title;
}

void Warlock::introduce() const{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}
