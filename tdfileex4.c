#include<stdio.h>
#include<stdlib.h>
int main ()
{
FILE *f1 ;
FILE *fi ;
int n ,i ;
char  c ;
f1=fopen("data.txt","r+");
fi=fopen("ex4.txt","w+");
if(f1==NULL || fi== NULL){
printf("there has been an error");
exit(1); }
fseek(f1,0,SEEK_END);
n=ftell(f1);
i=0;
for(i=1;i<=n;i++)
{
fseek(f1,-i,SEEK_END);
c=fgetc(f1);
fprintf(fi,"%c",c);
}
return 0; }