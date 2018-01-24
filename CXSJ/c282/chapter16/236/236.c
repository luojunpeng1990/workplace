//功能：创建文件
//时间：2018年1月24日21:58:12
//重点：create()函数的应用——io.h头文件
//难点：create()、io.h
//结果：错误，不会该头文件和库函数的使用

#include <stdio.h>
#include <io.h>

void main()
{
	int h;
	char filename[20];
LOOP:
	printf("please input filename:\n");
	scanf("%s",&filename);
	if(h=creat(filename,0) == -1)
	{
		printf("\n Error!Cannot create!\n");
		goto LOOP;
	}
	else
	{
		printf("\nThis file has create!\n");
		close(h);
	}

	return 0;

}