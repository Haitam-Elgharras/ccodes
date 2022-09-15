/*#include<stdio.h>
void fib(int *pa  , int *pb)
{int c,p ;
if(*pa* *pb>=0)
{c=*pb;
*pb=*pa;
*pa=c ;}
else 
{
c=*pa+*pb ;
p=*pa * *pb ;
*pa=c;
*pb=p;
}
printf("le resultat est : %d %d ",*pa ,*pb) ;
}
int main()
{int a , b ;
int *pa=&a , *pb=&b ;
printf("donner le premier  nombre : ");
scanf("%d",pa);
printf("donner le deuxieme nombre : \n");
scanf("%d",pb);
fib(pa,pb);
return 0 ;

}*/
#include<stdio.h>
#include<string.h>
int main()
{int *p ,t[100],n,i ;
p=t;
printf("donner le nombre de valeurs :");
scanf("%d",&n);
printf("donner les valeurs ");
for(p=t;p<=t+n-1;p++)
{scanf("%d\n",p);
}
printf("le tableau est :\n");
for(p=t;p<=t+n-1;p++)
{
    printf("%d\n",*p);
}
return 0 ;
 }














/*#include<stdio.h>
#include<string.h>
int main()
{int a  ;
int *pa = &a  ;
printf("donner le nombre : ");
scanf("%d",pa);
if(*pa%2==0)
printf("le nombre %d est pair",*pa);
else 
printf("le nombre %d est impair ",*pa);
return 0 ;
} */
/*#include<stdio.h>
#include<string.h>
int main()
{int a , i  ;
int *pa = &a ;
printf("donner un nombre :");
scanf("%d",pa);
for(i=1;i<=*pa/2;i++)
{if(*pa%2==0)
printf("%d est un diviseur de %d\n",i,*pa);
}
return 0 ;} */
