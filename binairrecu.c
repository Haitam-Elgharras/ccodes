#include<stdio.h>
int bn(int n )
{
if (n!=0)
{   return bn(n/2); 
printf("%d",n%2);

}}
int main()
{int n ;
printf("donner un nombre ");
scanf("%d",&n);
printf("%d",bn(n));
return 0 ; }