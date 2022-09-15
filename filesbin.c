#include<stdio.h>
#include<stdlib.h>
int main ()
{
FILE *fp ;
int x=855 ;
int y =99 ;
char nom [30] ,pr[30];
scanf("%s",nom);
scanf("%s",pr);
fp=fopen("binaire.bin","rb+");
fwrite(nom,sizeof(char),30,fp);
fwrite("\t",sizeof(char),1,fp);
fwrite(pr,sizeof(char),30,fp);
fclose(fp);
fp=fopen("binaire.bin","rb+");
fread(nom,sizeof(char),30,fp);
fread(pr,sizeof(char),30,fp);
printf("%s",nom);
printf("%s",pr);

//fread (&x,sizeof(int),1,fp);
//fread (&x,sizeof(int),1,fp);
//printf("%d",x);

return 0;



}