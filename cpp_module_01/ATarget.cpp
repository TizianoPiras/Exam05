#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(){}

ATarget::~ATarget(){}

ATarget::ATarget(const std::string &type): _type(type){}

ATarget::ATarget(const ATarget& copy): _type(copy._type), _effects(copy._effects){}

ATarget& ATarget::operator=(const ATarget&copy){
    if (this != &copy)
    {
        this->_type = copy._type;
        this->_effects = copy._effects;
    }
    return (*this);
}

const std::string& ATarget::getType() const{
    return this->_type;
}

void ATarget::getHitBySpell(const ASpell &spell) const{
    std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}