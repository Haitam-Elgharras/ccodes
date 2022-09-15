#include<stdio.h>
#include<string.h>
int main()
{
char t[1000] ;
int i , n=0 , s=0  ;
printf("donner un mot pour inverser  : " );
gets(t);
s=strlen(t) ;
for(i=0;i<=strlen(t)-1;i++)
{n=s-1-i ;
    printf("%c",t[n]);
    n=0 ;

return 0 ;
} }
/* #include<stdio.h>
#include<string.h>
int main()
{
char t[1000] ;
int i , n=0 , s=0  ;
printf("donner un mot pour inverser  : " );
for(i=0;i<=3;i++){
gets(t+i);}

for(i=0;i<=3;i++)
{
    printf("%c",t[i]);
    


return 0 ;
} */