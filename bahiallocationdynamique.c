#include<stdio.h>
#include<stdlib.h>
int main ()
{
int n , *p , s=0 , i   ;
float m=0 ;
printf("donner le nombre des elements de tableau :");
scanf("%d",&n);
p = calloc(n,sizeof(int)) ;
printf("donner les elemntes de tableau : \n");
for(i=0 ; i<=n-1 ; i++)
{
scanf("%d",(p+i));
s= s + *(p+i) ;
}
m=s/(float)n;
printf("la somme des elements de tableau est : \n %d \n le moyyene des elements de tableau est : \n %f ",s,m );

return 0 ; 
}