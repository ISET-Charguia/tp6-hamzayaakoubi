#include <stdio.h>
#include <string.h>

int nbmot(char ch[]);
int separateur(char c);
char majus(char c);
void main ()
{
char ch[30];

  printf("Donner une chaine " );
  gets(ch);
  printf("nombre de mot %d \n", nbmot(ch));
printf("%s\n",ch );

}
int separateur (char c)
{
  char caractere[]=" .,;!?";

  if (strchr(caractere,c)!=NULL)
  {
    return 1;
  }else
  return 0;
}
char majus(char c)
{
  c-=32;
  return c;
}
int nbmot (char ch[])
{
  int i=0, nb_mot=0;
  while (separateur(ch[i])==1) {
    i++;
  }
  ch[i]=majus(ch[i]);
  for(i ;i<strlen(ch);i++)
  {
    if ((separateur(ch[i])==1)&&(ch[i]!=ch[i+1])) {
      nb_mot++;
    }
  if  ((separateur(ch[i])==0)&&(separateur(ch[i-1])==1))
{
  ch[i]=majus(ch[i]);
}
  }
  if ((separateur(ch[strlen(ch)-1]))==NULL)
  {
  nb_mot+=1;
}

return nb_mot;
}
