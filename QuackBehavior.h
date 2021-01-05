#ifndef QUACKBEHAVIOR_HEADER_FILE
#define QUACKBEHAVIOR_HEADER_FILE

#include <iostream>


class QuackBehavior{
  public:
    virtual void quack() = 0;
    virtual ~QuackBehavior(){}
};

class NormalQuack:public QuackBehavior
{
  public:
    void quack(){
      std::cout << "Quack" << std::endl;
    } 
};


class Squeak:public QuackBehavior
{
  public:
    void quack(){
      std::cout << "Squeak" << std::endl;
    } 
};

class NoSound:public QuackBehavior
{
  public:
    void quack(){
      std::cout << "NoSound" << std::endl;
    } 
};

#endif
