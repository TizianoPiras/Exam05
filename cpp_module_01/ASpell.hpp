#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>

class ATarget;

class ASpell {
    private:
        std::string _effects;
        std::string _name;
    public:
        ASpell();
        ASpell(const std::string &name, const std::string &effects);
        ASpell(const ASpell&copy);
        ASpell& operator=(const ASpell&copy);
        virtual ~ASpell();
        const std::string &getName() const;
        const std::string &getEffects() const;
        virtual ASpell *clone() const = 0;
        void launch(const ATarget &target) const;
};

#endif