#include<stdio.h>
#include<string.h>
int main()
{
char t[1000] , t1[1000] ;
int i ,s=0  ;
printf("donner un mot : " );
gets(t);
strcpy(t1,t);
strrev(t1);
for(i=0;i<=strlen(t)-1;i++)
{if(t[i]==t1[i])
s=1  ;
else {
    s=0;
break;
}}
if(s==1)
printf("le mot  %s est palindrome ",t);
else 
printf("le mot %s nest pas palindrome",t);
printf("%s\t",t1);


return 0 ;
 }