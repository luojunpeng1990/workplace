//���ܣ�ʹ������������������
//ʱ�䣺2017��9��3��22:57:02
//�ؼ����������룬#if  #else  #endif �����Ԥ����ĺ�
//���㣺����Ϥ��������
//��ȷ�����󣬲���ʹ����������


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