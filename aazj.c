
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ int tab[6]={0,10,20,30,40,50} ;
int *p =tab ;
printf("%d \n",*p++);0
  printf("%d\n",*p+1);11
  printf("%d\n",++*p);11
  printf("%d\n",*(p+1));20
 printf("%d\n",*p+2);13
  printf("%d\n",*(p++));11
   printf("%d\n",*p);20
  printf("%d\n",*(++p));30
  printf("%d\n",*p);30
  printf("%d\n",*(p+2));50
    printf("%d\n",*(p+0));30

return 0 ;


}