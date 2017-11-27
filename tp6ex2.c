#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void conjuger(char verbe[]);
void main()
{
  char verbe[10];
  char t[]="er";
  printf("Donner un verbe de 1er groupe\n" );
  gets(verbe);
if ((verbe[strlen(verbe)-2]!='e')||(verbe[strlen(verbe)-1]!='r'))
  {
    printf("ce verbe est pas de 1er groupe \n" );
  }else
  conjuger(verbe);
}
void conjuger(char verbe[])
{
  char voyelle[]="iuoyea";
  verbe[strlen(verbe)-1]='\0';
  if (strchr(voyelle,verbe[0])!=NULL)
  {
    printf("j'%s \n",verbe);
    printf("tu %ss\n",verbe);
    printf("il/elle %s\n",verbe);
printf("nous %sons \n",verbe);
printf("vous %sz \n",verbe);
printf("ils/elles %snt \n",verbe);


}else
{
  printf("je %s \n",verbe);
  printf("tu %ss\n",verbe);
  printf("il/elle %s\n",verbe);
printf("nous %sons \n",verbe);
printf("vous %sz \n",verbe);
printf("ils/elles %snt \n",verbe);
}
}
