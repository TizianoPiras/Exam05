#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell *>::iterator it = _spellbook.begin(); it != _spellbook.end(); ++it)
        delete it->second;
    _spellbook.clear();
}

SpellBook::SpellBook(const SpellBook&copy): _spellbook(copy._spellbook){}

SpellBook& SpellBook::operator=(const SpellBook&copy){
    if (this != &copy)
    {
        this->_spellbook = copy._spellbook;
    }
    return *this;
}

void SpellBook::learnSpell(const ASpell*spell){
    std::map<std::string, ASpell *>::iterator it = _spellbook.find(spell->getName());
    if (it == _spellbook.end())
        _spellbook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(const std::string &name){
    std::map<std::string, ASpell *>::iterator it = _spellbook.find(name);
    if (it != _spellbook.end())
    {
        delete it->second;
        _spellbook.erase(it);
    }
}

ASpell *SpellBook::createSpell(const std::string &name){
    std::map<std::string, ASpell *>::iterator it = _spellbook.find(name);
    if (it != _spellbook.end())
        return it->second->clone();
    return nullptr;
}