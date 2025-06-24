#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>

class ASpell;

class ATarget{
    private:
        std::string _type;
    public:
        ATarget();
        virtual ~ATarget();
        ATarget(const std::string &type);
        ATarget(const ATarget&copy);
        ATarget &operator=(const ATarget&copy);
        virtual ATarget *clone() const = 0;
        const std::string &getType() const;
        void getHitBySpell(const ASpell &spell) const;
};

#endif