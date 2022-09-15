#include<stdio.h>
#include<string.h>
int main ()
{
    char ta[100] , tb[100] ;
    char *pa = ta , *pb = tb ;
    int sa , sb ;
    printf("donner le premier chaine :");
    gets(pa);
    printf("donner le deuxieme chaine :");
    gets(pb);
 
    pa= ta + strlen(ta) ;
while (*pb!= '\0')
{
   *pa = *pb ;
   pa ++ ;
   pb++;
}
*pa='\0' ;
puts(ta);
printf("%s",ta) ; 
return 0 ; 
}