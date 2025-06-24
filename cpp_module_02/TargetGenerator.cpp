#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator()
{
    for (std::map<std::string, ATarget *>::iterator it = _targetGenerator.begin(); it != _targetGenerator.end(); ++it)
        delete it->second;
    _targetGenerator.clear();
}

TargetGenerator::TargetGenerator(const TargetGenerator&copy): _targetGenerator(copy._targetGenerator){}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator &copy){
    if (this != &copy)
    {
        this->_targetGenerator = copy._targetGenerator;
    }
    return *this;
}

void TargetGenerator::learnTargetType(const ATarget *target){
    std::map<std::string, ATarget *>::iterator it = _targetGenerator.find(target->getType());
    if (it == _targetGenerator.end())
        _targetGenerator[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(const std::string &name){
    std::map<std::string, ATarget *>::iterator it = _targetGenerator.find(name);
    if (it != _targetGenerator.end())
    {
        delete it->second;
        _targetGenerator.erase(it);
    }
}

ATarget *TargetGenerator::createTarget(const std::string &name){
    std::map<std::string, ATarget *>::iterator it = _targetGenerator.find(name);
    if (it != _targetGenerator.end())
        return it->second->clone();
    return nullptr;
}