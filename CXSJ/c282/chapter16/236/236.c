//���ܣ������ļ�
//ʱ�䣺2018��1��24��21:58:12
//�ص㣺create()������Ӧ�á���io.hͷ�ļ�
//�ѵ㣺create()��io.h
//��������󣬲����ͷ�ļ��Ϳ⺯����ʹ��

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