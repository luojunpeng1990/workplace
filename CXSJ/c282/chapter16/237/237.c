//���ܣ���ʽ����д�ļ�
//ʱ�䣺2018��1��24��23:23:11
//�ص㣺fprintf()��fscanf()���÷�
//�ѵ㣺��Ϥ�⺯�����÷���fprntf()��fscanf()�Ķ�д�������նˣ��Ǵ����ļ�
//��������ǿ��֪ʶ��
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