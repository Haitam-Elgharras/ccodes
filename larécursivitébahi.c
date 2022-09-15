#include <stdio.h>
int descente (int n )
{
if(n==0)
return 0 ;
else {
printf("%d ",n);
descente(n-1);
}
}

int montee ( int n){
if(n==0)
return 0 ;
else 
{montee(n-1);
printf("%d ", n);

} }

int main()
{int n ;
printf("donner un nombre ");
scanf("%d",&n);
montee(n) ;
printf("\t") ;
descente(n);
return 0 ;
}