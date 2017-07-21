//功能：cpp程序的框架实现，头文件声明以及定义的实现
//时间：2016年11月18日11:24:00
//关键：命名空间的使用，命名空间包含整个类的范围以及不属于类的函数或变量，即变量和函数都是有命名空间的，有从属的范围，加以区别改善C语言中的重名的问题
//错误：出现main.cpp中15行错误，该问题发现最后为最初的声明中dog.h中出错，因此，会发现一条规律，最顶层的调用出错，往往是最底层的声明或实现处出错
//结果：正确无误

#include <stdio.h>
#include "person.h"
#include "dog.h"

int main(int argc, char **argv)
{
  A::Person per;
  per.setName("zhangsan");
  per.setAge(16);
  per.printInfo();

  C::Dog dog;
  dog.setName("wangcai");
  dog.setAge(1);
  dog.printInfo();

  A::printVersion();
  C::printVersion();

  return 0;
}
