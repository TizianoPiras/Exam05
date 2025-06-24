#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class SpellBook{
    private:
        std::map<std::string, ASpell *> _spellbook;
        SpellBook(const SpellBook&copy);
        SpellBook& operator=(const SpellBook&copy);
        public:
        SpellBook();
        ~SpellBook();
        void learnSpell(const ASpell*spell);
        void forgetSpell(const std::string &name);
        ASpell *createSpell(const std::string &name);
};

#endif