//int fputc(int ch,FILE *fp)   返回值： 正常  要写入字符的代码   错误：EOF

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

  int ch;
  FILE *in, *out;
  if(argc != 3)
  {
    printf("Error in format,Usage: fputc filename1 filename2\n");
    return;
  }

  if((in = fopen(argv[1],"r")) == NULL)
  {
    printf("The file <%s> can not be opened!\n",argv[1]);
    return;
  }

  if((out = fopen(argv[2],"w")) == NULL)    //行末一个分号搞了半天
  {
    printf("The file <%s> can not be opened!\n",argv[2]);
    return;
  }

  ch =fgetc(in);
  while(ch != EOF)
  {
    fputc(ch,out);
    ch = fgetc(in);
  }

  fclose(in);
  fclose(out);

  return 0;
}
