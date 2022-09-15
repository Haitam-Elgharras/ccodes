#include<stdio.h>
#include<string.h>
int main()
{
char t[1000] ;
int i , j  , s=0 , max=0 , si=0  ;
printf("entrer un mot pour trouver le caractere qui se repete la plus : " );
gets(t);
for(i=0;i<=strlen(t)-1;i++)
{   for(j=0;j<=strlen(t)-1;j++)
{if(t[i]==t[j])
s++;
}
if(s>max)
{ 
max=s;
si=i;
}
s=0;
}
printf("le caractere qui se repete la plus  est : %c ",t[si] ) ; 
return 0 ;
}