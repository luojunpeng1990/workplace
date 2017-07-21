//功能：使用class实现输出信息
//时间：2016年11月17日16:03:52
//关键：类的实现
//错误：
//结果：正确无误

#include <stdio.h>

class person {
public:
  char *name;
  int age;
  char *work;

  void printInfo(void)
  {
    printf("name = %s,age = %d,work = %s\n",name,age,work);
  }
};

int main(int argc ,char **argv)
{
  struct person persons[] = {
    {"zhangsan",10,"teacher"},
    {"lisi",16,"doctor"},
  };

  persons[0].printInfo();
  persons[1].printInfo();

  return 0;
}
