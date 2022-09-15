#include<stdio.h>
#include<stdlib.h>
int main ()
{int  *p1 ,a, *p2 , aide , t[1000]  , n , i ;
p1=t ;
printf("donner la taille du tableau :");
scanf("%d",&n);
for(p1=t;p1<=t+n-1;p1++)
{printf("veuilles entrer un nombre ");
scanf("%d",p1); }
for(p1=t , p2=t+n-1 ; p1<p2 ; p1++ , p2--)
{
aide=*p1;
*p1=*p2 ;
*p2=aide;
}
for(p1=t;p1<=t+n-1;p1++)
{printf("%d\t",*p1); }
return 0 ;
}