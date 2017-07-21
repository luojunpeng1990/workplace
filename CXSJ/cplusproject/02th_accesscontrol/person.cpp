//功能：查看类class的数据属性
//时间：2016年11月17日16:24:51
//关键：了解class数据的public,protected和private类型
//错误:class和结构体声明后的}需要到；这个一定要注意，class和struct的区别
//结果：正确无误


#include <stdio.h>

class Person{
private:
  char *name;
  int   age;
  char  *work;

public:
  void setName(char *n)
  {
    name = n;
  }
  int setAge(int a)
  {
    if(a < 0 || a > 150)
    {
      age = 0;
      return -1;
    }
    age  =  a ;
    return 0;
  }

  void printInfo(void)
  {
    printf("name = %s, age = %d, work = %s\n",name ,age,work);
  }

};

int main (int argc, char ** argv)
{
  Person per;
  //per.name = "zhangsan";
  per.setName("zhangsan");
  per.setAge(200);
  per.printInfo();

  return 0;
}
