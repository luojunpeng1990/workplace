//char *fgets(char *str,int n,FILE *fp)  返回值： 正确：返回字符串的内存首地址，即str的值
//错误：返回一个NULL值 此时应当用feof（）或ferror()函数来判别是读取到了文件尾，还是发生了错误
//int fputs(char *str,FILE *fp)   返回值： 正确 写入文件的字符个数，即字符串的长度
//错误： 返回一个NULL值，此时应当用feof（）或ferror()函数来判别是读取到了文件尾，还是发生了错误

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(int argc,char **argv)
{
  char buffer[SIZE];
  FILE *fp1,*fp2;

  if(argc != 3)
  {
    printf("Usage:fgetsfputs filename1 filename2\n");
    return;
  }

 if((fp1 = fopen(argv[1],"a")) == NULL)
 {
   printf("The file <%s> can not be opened!\n",argv[1]);
   return;
 }

 if((fp2 = fopen(argv[2],"r")) == NULL)
 {
   printf("The file <%s> can not be opened！\n",argv[2]);
   return;
 }

 while(fgets(buffer,SIZE,fp1) != NULL)
     printf("%s\n",buffer);

 while (fgets(buffer,SIZE,fp2) != NULL)

//     fseek(fp1,0,SEEK_END);   //将指针指向文末  有问题已经用a追加打开了，SEEK_END  512了，中间已经有‘\0’符号截断了
//     fseek(fp1,0,SEEK_CUR);
     fputs(buffer,fp1);

fclose(fp1);
fclose(fp2);

if((fp1 = fopen(argv[1],"r")) == NULL)
{
  printf("The file can not be opened!\n");
  return;
}

while(fgets(buffer,SIZE,fp1) != NULL)
printf("%s\n",buffer);

fclose(fp1);

  return 0;
}
