#include <stdio.h>

int main(int argc, char ** argv )
{
	FILE *fp1,*fp2,*fp3;
    char file1[20],file2[20],file3[20],ch;
    int file_number;
	printf("Please input file1:");
	scanf("File:\n");
	if((fp1 = fopen(file1,"rb")) != NULL)
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
	printf("File2:\n");
		if((fp2 = fopen(file2,"rb")) != NULL)
		{
			ch = fgetc(fp2);
			while(ch!=EOF)
			{
				putchar(ch);
				ch = fgetc(fp2);
			}
		}
		else
		{
			printf("Can not open!\n");
			exit(1);
		}
		printf("\nPlease input file3:");
		scanf("%s",file3);
		printf("File3:\n");
		if((fp3 = fopen(file3,"rb"))!=NULL)
		{
			ch = fgetc(fp3);
			while(ch != EOF)
			{
				putchar(ch);
				ch = fgetc(fp3);
			}
		}
		else
		{
			printf("Can not open!\n");
			exit(1);
		}

		file_number = fcloseall();
		printf("\n%d Files closed\n",file_number);
		return 0;

}