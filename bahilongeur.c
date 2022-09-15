#include<stdio.h>
int main()
{
char t[1000] ;
int i=0 , s=0 ;
printf("entrer un mot pour calculer sa longeur : " );
gets(t);
while(t[i] != '\0')
{
s++;
i++;
}
printf("la longeur de cet mot est : %d",s) ; 
return 0 ;
}