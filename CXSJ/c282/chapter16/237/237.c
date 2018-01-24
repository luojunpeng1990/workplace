//功能：格式化读写文件
//时间：2018年1月24日23:23:11
//重点：fprintf()、fscanf()的用法
//难点：熟悉库函数的用法，fprntf()和fscanf()的读写对象不是终端，是磁盘文件
//结果：需加强该知识点
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,flag = 1;
	char str[80],filename[50];
	FILE *fp;
	printf("please input filename:\n");
	scanf("%s",filename);
	if((fp = fopen(filename,"w")) == NULL)
    {
		printf("cannot open!");
		exit(0);
	}
	while(flag == 1)
	{
		printf("\nInput string:\n");
		scanf("%s",str);
		fprintf(fp,"%s",str);
		printf("\nContinue:?");
		if((getchar() == 'N' || getchar() == 'n'))
		{
			flag = 0;
		}
	}
    fclose(fp);
	fp = fopen(filename,"r");
	while(fscanf(fp,"%s",str)!=EOF)
	{
		for(i = 0;str[i]!='\0';i++)
		{
			if((str[i]>='a')&&(str[i]<='z'))
			{
				str[i]-=32;
			}
		}
			printf("\n%s\n",str);
	}

	    fclose(fp);
		return 0;
	
}