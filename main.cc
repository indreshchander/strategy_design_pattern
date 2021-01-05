#include <iostream>
#include "Duck.h"

using namespace std;

int main()
{
  MallardDuck *duck = new MallardDuck();

  cout << "Duck type:" << duck->getDuckBreed() << endl;
  duck->makeDuckFly();
  duck->makeDuckQuack();

  cout << "*** Changing fly behavior to JetPackFly" << endl;
  duck->setFlyBehavior(new JetpackFly());
  duck->makeDuckFly();

  return 1;
}
