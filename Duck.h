#ifndef DUCK_HEADER_FILE
#define DUCK_HEADER_FILE

#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
  public:
    Duck(std::string dcBreed, FlyBehavior* fb, QuackBehavior* qb):flyB(fb), quackB(qb), duckBreed(dcBreed)
    {
    }
   
    //Write getter and setter methods here.  
    std::string getDuckBreed()
    {
       return duckBreed;
    }

    void setFlyBehavior(FlyBehavior *newFlyB){
       delete flyB;
       flyB = newFlyB;
    }
 
    void setQuackBehavior(QuackBehavior *newQuackB){
       delete quackB;
       quackB = newQuackB;
    }

    void makeDuckFly(){
       flyB->fly();
    }

    void makeDuckQuack(){
       quackB->quack();
    }

    ~Duck(){
       delete flyB;
       delete quackB;
    }

  private:
    std::string duckBreed;
    FlyBehavior *flyB;
    QuackBehavior *quackB;
};

class MallardDuck:public Duck
{
  public:
    MallardDuck():Duck("MallardDuck", new NormalFly(), new NormalQuack()){
    }
};


class ToyDuck:public Duck
{
  public:
    ToyDuck():Duck("ToyDuck", new NoFly(), new Squeak()){
    }
};

#endif
