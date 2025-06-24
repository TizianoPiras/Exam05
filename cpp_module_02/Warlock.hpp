#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock{
    private:
        std::string _name;
        std::string _title;
        SpellBook _spellbook;
        Warlock();
        Warlock(const Warlock&copy);
        Warlock& operator=(const Warlock&copy);
    public:
        ~Warlock();
        Warlock(const std::string &name, const std::string &title);
        const std::string& getName() const;
        const std::string& getTitle() const;
        void setTitle(const std::string& title);
        void introduce() const;
        void learnSpell(const ASpell*spell);
        void forgetSpell(const std::string &name);
        void launchSpell(const std::string &name, const ATarget&target);

};

#endif