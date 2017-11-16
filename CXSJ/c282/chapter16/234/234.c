#include <stdio.h>

int main(int argc  char *[] argv)
{
	FILE *fp1,*fp2,*fp3;
    char file[20],file[20],file3[20],ch;
    int file_number;
	printf("Please input file1:");
	scanf("File:\n");
	if((fp1 = fopen(file1,"rb"))! = NULL)
	{
		ch = fgetc(fp1);
		while(ch != EOF)
		{
			putchar(ch);
			ch = fgetc(fp1);
		}

	}
	else
	{
		printf("Can not open!\n");
		exit(1);
	}
	printf("\nPlease input file2:");
	scanf("%s",file2);
	printf("File2:\n);
		if(





	return 0;
}