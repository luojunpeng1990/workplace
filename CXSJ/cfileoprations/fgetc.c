//int fgetc(FILE *fp)  返回值： 正确  返回读取字符的代码  错误  EOF

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int ch;
  FILE *fp;

  if(argc != 2)
   {
    printf("Error format,Usage: fgetc filename1\n");
    return;
  }

  if((fp = fopen(argv[1],"r+")) == NULL)
  {
    printf("The file <%s> can not be opened!\n",argv[1]);
    return;
  }

  ch = fgetc(fp);
  while(ch != EOF)
  {
    putchar(ch);
    ch = fgetc(fp);
  }

  fclose(fp);

  return 0;
}
