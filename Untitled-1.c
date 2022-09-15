#include<stdio.h>
#include<stdlib.h>
#include<string.h>
unsigned int fct(unsigned int n  );
int main()
{ 
   int t[5]={0,2,4,6,8},i ;
   for(i=0;i<5;i++)
   t[i]=fct(t[i]);
     for(i=0;i<5;i++)
printf("%d\t",t[i]);
return 0 ;}
unsigned int fct (unsigned int n )
{
if (n==0) return 0 ;
return fct(n-1)+2*n-1 ;
}
