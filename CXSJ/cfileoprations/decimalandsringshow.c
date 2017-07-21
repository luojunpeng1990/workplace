#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
   char str[9];
   int ch,cout,i;
   FILE *fp;

   if(argc != 2)
   {
     printf("Error format,Usage:decimalandstringshow filename!\n");
     return;
   }

   if((fp = fopen(argv[1],"r")) == NULL)
   {
     printf("The file <%s> can not be opened!\n",argv[1]);
     return;
   }

   cout = 0;

   do{
         i = 0;
         printf("%06o: ", cout * 8);
      do{
         ch =fgetc(fp);
         printf("%4d",ch);

         if(ch < ' ' || ch > '~')
              str[i] = '#';
         else
              str[i] = ch;

         if(++i == 8)
             break;
      }while(ch !=EOF);
       str[i] = '\0';
       for(;i < 8;i++)
         printf(" ");
       printf("%s\n",str);
       cout++;
   }while(ch != EOF);

   fclose(fp);

  return 0;
}
