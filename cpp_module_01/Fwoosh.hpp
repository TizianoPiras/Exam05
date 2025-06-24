#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh: public ASpell{
    public:
        Fwoosh();
        ~Fwoosh();

        ASpell *clone () const;
};

#endif