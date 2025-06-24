#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>

class ASpell;

class ATarget {
    private:
        std::string _type;
        std::string _effects;
    public:
        ATarget();
        ATarget(const std::string &type);
        virtual ~ATarget();
        ATarget(const ATarget&copy);
        ATarget& operator=(const ATarget&copy);
        const std::string &getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(const ASpell &spell) const;
};

#endif