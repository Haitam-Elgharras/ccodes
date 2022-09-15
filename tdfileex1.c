#include<stdio.h>
#include<stdlib.h>
FILE *f ;
void fprenom()
{char nom [25] ;
char pr [25];
int anne ;
f = fopen("data.txt","r+");
while ( !feof(f) )
{
fscanf(f,"%s%s%d",nom,pr,&anne);
printf("%s",pr);
printf("\n");
}
}
void fage()
{char nom [25] ;
char pr [25];
int  anne;
f = fopen("data.txt","r+");
while ( !feof(f) )
{
fscanf(f,"%s%s%d",nom,pr,&anne);
anne = 2022 - anne ;
printf("%d",anne);
printf("\n");
}}
int main ()
{
char  c ;
f = fopen("data.txt","r+");
if (f==NULL)
{
    puts("error");
    exit(1);
}
while (!feof(f)){
c=fgetc(f);
printf("%c",c);
 }
fprenom();
fage();
fclose(f);
return 0 ;
}