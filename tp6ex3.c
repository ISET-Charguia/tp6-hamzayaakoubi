#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *remplace(char ch[] ,char old ,char new );
void main() {
  char ch[10];
  char c1,c2;
  printf("donner une mot\n" );
  gets(ch);
  printf("donner old \n");
  scanf("%c", &c1);
  printf("donner new \n");
  fflush(stdin);
  scanf("%c",&c2);
  printf("la nouveau mot %s",remplace(ch,c1,c2));
}
char *remplace(char ch[] ,char old ,char new )
{
  int i=0;
  for (i=0;i<strlen(ch);i++)
  {
  if (ch[i]==old)
  {
    ch[i]=new;
  }
  }
  return ch;
  }
