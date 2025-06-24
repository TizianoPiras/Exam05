#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class TargetGenerator{
    private:
        std::map<std::string, ATarget *> _targetGenerator;
        TargetGenerator(const TargetGenerator&copy);
        TargetGenerator& operator=(const TargetGenerator&copy);
     public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(const ATarget *target);
        void forgetTargetType(const std::string &name);
        ATarget *createTarget(const std::string &name);
};

#endif