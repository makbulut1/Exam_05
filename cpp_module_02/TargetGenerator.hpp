#ifndef target_hpp
#define target_hpp
#include "iostream"
#include "vector"
#include "ATarget.hpp"
class TargetGenerator{
    private:
    std::vector<ATarget *> generator;

    public:
    TargetGenerator();
    ~TargetGenerator();

    void         learnTargetType(const ATarget* target);
    void         forgetTargetType(const std::string& name) ;
    ATarget*    createTarget(std::string const &);
};
#endif