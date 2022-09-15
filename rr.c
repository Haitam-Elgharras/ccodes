#include<stdio.h>
#include<stdlib.h>
int main()
{
int i =1 , k = 2 ;
int *p1=&i , *p2=&k ;
(*p1)++ , (*p2)++ ;
p1=p2 ;
(*p1)++ , (*p2)++ ;
printf("%d%d",i,k);
return 0 ;


}