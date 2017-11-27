#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *inver_case(char ch[]);
void main()
{
  char ch[10];
  printf("donner une mot \n" );
  gets(ch);
  printf("la nouvelle mot %s",inver_case(ch));
}
char *inver_case(char ch[])
{
  char minus[]="abcdefghijklmnopqrstuvwxyz";
  char majus[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i=0;
  for(i=0;i<strlen(ch);i++)
  {
  if(strchr(majus,ch[i])!=NULL)
  {
    ch[i]=ch[i]+32;
  }else if (strchr(minus,ch[i])) {
    ch[i]=ch[i]-32;
  }
}
  return ch;
}
