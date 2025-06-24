#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>

class ATarget;

class ASpell{
    private:
        std::string _name;
        std::string _effects;
    public:
        ASpell();
        virtual ~ASpell();
        ASpell(const std::string &name, const std::string &effects);
        ASpell(const ASpell&copy);
        ASpell &operator=(const ASpell&copy);
        virtual ASpell *clone() const = 0;
        const std::string &getName() const;
        const std::string &getEffects() const;
        void launch(const ATarget &target);
};

#endif