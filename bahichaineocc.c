#include<stdio.h>
#include<string.h>
int main ()
{
    char ta[100] , tb[100] , c  ;
    int i , k=0,sa ;
    printf("donner le premier chaine :");
    gets(ta);
    printf("donnere une caractere pour supprimer : ");
    scanf("%c",&c);
    sa=strlen(ta);
for(i=0 ;i <= sa-1 ; i++ )
{
    if(ta[i]==c);
{
    for(k=i;k<=sa-1;k++)
    ta[k]=ta[k+1];

   sa--;
   i--;
}
}
puts(ta);
printf("%s",ta) ; 
return 0 ; 
}