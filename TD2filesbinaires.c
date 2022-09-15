#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *b1 ;
FILE *b2 ;
int tabt[10] ;
int i ;
b1 = fopen("dp3.bin","wb+");
b2 = fopen("all.bin","wb+");
if(b1==NULL || b2==NULL)
{
    printf("there has been an error");
    exit(1);
}
for(i=0;i<=9;i++)
{printf("donner un nombre");
scanf("%d",&tabt[i]);
}
for(i=0;i<=9;i++)
{
if(tabt[i]%3==0)
fwrite(&tabt[i],sizeof(int),1,b1);
else 
fwrite(&tabt[i],sizeof(int),1,b2);
}
return 0;
}