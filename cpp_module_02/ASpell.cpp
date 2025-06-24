#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(){}

ASpell::~ASpell(){}

ASpell::ASpell(const std::string &name, const std::string &effects): _name(name), _effects(effects){}

ASpell::ASpell(const ASpell &copy): _name(copy._name), _effects(copy._effects){}

ASpell &ASpell::operator=(const ASpell &copy){
    if(this != &copy)
    {
        this->_name = copy._name;
        this->_effects = copy._effects;
    }
    return *this;
}

const std::string &ASpell::getName() const {
    return this->_name;
}

const std::string &ASpell::getEffects() const {
    return this->_effects;
}

void ASpell::launch(const ATarget&target){
    target.getHitBySpell(*this);
}