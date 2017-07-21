//FILE *fopen(char *pname,char mode)  返回值：   正确  文件指针   错误  NULL
//int fclose(FILE * fp)      返回值： 正确  0  错误   EOF

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
  FILE *fp;
  int fd;
  if((fp = fopen("1test","w+")) == NULL)
     {
       printf("The file can not be opened!\n");
       exit(1);
     }
  if((fd = fclose(fp)) == EOF)
  {
    printf("The file can not be closed!\n");
    exit(2);
  }

  return 0;
}
