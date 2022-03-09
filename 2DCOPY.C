#include<string.h>
void main()
{
  int x,len,i,j;
  char names[10][25];
  char names2[10][25];
  clrscr();
  printf("Enter 10 names:");
  for(x=0;x<=9;x++)
 {
   gets(names[x]);
   }
   printf("u have entered:\n");
   for(x=0;x<=9;x++)
   {
    printf("%s\n",names[x]);
    }
   for(x=0;x<=9;x++)
   {
      len=strlen(names[x]);
      printf("%d\n",len);
      }
    for(x=0;x<=9;x++)
    {
      strcpy(names2[x],names[x]);
      printf("%s",names2[x]);


    }
    getch();
    }