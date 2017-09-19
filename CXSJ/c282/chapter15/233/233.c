//功能：使用条件编译隐藏密码
//时间：2017年9月3日22:57:02
//关键：条件编译，#if  #else  #endif 是针对预定义的宏
//不足：不熟悉条件编译
//正确：错误，不会使用条件编译


#define PWD  1
#undef PWD

#include <stdio.h>

int main(void)
{
	char *s = "luojunpeng";
#if PWD
    printf("***********\n");
#else
	printf("%s\n",s);
#endif
	return 0;
}