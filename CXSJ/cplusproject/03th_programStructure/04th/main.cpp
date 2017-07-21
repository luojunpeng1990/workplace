#include <stdio.h>
#include "person.h"
#include "dog.h"

using A::Person;

using C::Dog;

using A::printVersion;
using C::printVersion;

int main(int argc, char **argv)
{

  Person per;
  per.setName("zhangsan");
  per.setAge(16);
  per.printInfo();

  Dog dog;
  dog.setName("wangcai");
  dog.setAge(1);
  dog.printInfo();

  A::printVersion();
  C::printVersion();

  return 0;
}
