#ifndef FLYBEHAVIOR_HEADER_FILE
#define FLYBEHAVIOR_HEADER_FILE

#include <iostream>

class FlyBehavior{
  public:
    virtual void fly() = 0;

    virtual ~FlyBehavior(){
    }    
};

class NormalFly:public FlyBehavior
{
  public:
    void fly(){
      std::cout << "I am a normal flying duck" << std::endl;
    } 
};


class NoFly:public FlyBehavior
{
  public:
    void fly(){
      std::cout << "I am not a flying duck. I don't fly" << std::endl;
    } 
};

class JetpackFly:public FlyBehavior
{
  public:
    void fly(){
      std::cout << "I am a duck with JetPack. I can fly fast" << std::endl;
    } 
};

#endif
