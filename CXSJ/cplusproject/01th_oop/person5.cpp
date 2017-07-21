//功能：struct到class的转变
//时间：2016年11月17日15:52:15
//关键:函数放在了stuct内
//错误：struct中初始化内的{}后加的是，号，一定不要弄成；号
//结果：

#include <stdio.h>

struct person {
    char *name;
    int age;
    char *work;

    void printInfo(void)
    {
       printf("name = %s,age = %d,work = %s\n",name,age,work);
    }
};

int main(int argc, char **argv)
{
  struct person persons[] = {
    {"zhangsan",10,"teacher"},
    {"lisi",16,"doctor"},
  };

  persons[0].printInfo();
  persons[1].printInfo();

  return 0;
}
