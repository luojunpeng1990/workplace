//���ܣ�����malloc��������ṹ��ָ��
//ʱ�䣺2017��8��15��13:58:48
//�ؼ���malloc��ʹ���Լ��ṹ���ʹ��
//���㣺��̬�����ڴ溯����malloc����������calloc��recalloc����Ϥ
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	struct com
	{
		int num;
		char *name;
		int count;
		double price;
	}*commodity;
	commodity = (struct com*)malloc(sizeof(struct com));
	commodity->num = 1001;
	commodity->name = "ƻ��";
	commodity->count = 100;
	commodity->price = 2.1;
	printf("��� = %d\n���� = %s\n���� = %d\n�۸�=%f\n",commodity->num,commodity->name,commodity->count,commodity->price);

	return 0;
}