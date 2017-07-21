//功能：利用class输出信息
//时间：2016年11月17日17:27:10
//关键：this指针为当前类实例化对象的指针，name以就近原则搜寻
//错误：main函数写成mian函数，会出现一大溜的错误，需注意重视
//结果：正确无误


#include <stdio.h>

class Person{
private:
    char *name;
    int   age;
    char  *work;

  public:
    void setName(char *name)
    {
      this->name = name;
    }

    int setAge(int age)
    {
      if(age < 0 || age > 150)
        {
          this->age = 0;
          return -1;
        }
    this->age = age;
    return  0;
  }

  void printInfo(void)
  {
    printf("name = %s, age = %d, work =%s\n",name,age,work);
  }
};

int main(int argc, char **argv)
{
  Person per;

  //per.name = "zhangsan";
  per.setName("zhangsan");
  per.setAge(200);
  per.printInfo();

  return 0;
}
