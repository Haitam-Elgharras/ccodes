#include <stdio.h>
#include <string.h>
int main()
{ int s=0 ,i,n   ;
char m1[1000] , m2[1000] , *p1=m1 , *p2=m2  ;
printf("donner le premier mot :");
gets(m1);
printf("donner le deuxieme mot : ");
gets(m2);
n=strlen(m1);
for(i=0;i<=n-1;i++)
{if(m1[i]!=m2[i])
s++;
}
printf("la distance de hamming est : %d",s);
return 0 ;
}