#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
int nb ;
struct element *next ;
}element ;
typedef struct {
struct pile *sommet ;
}pile ;
void empiler (pile *p ,int nvb)
{ element *nouveau =malloc(sizeof(*nouveau)) ;
nouveau -> nb = nvb ;
nouveau ->next = p->sommet ;
p->sommet = nouveau ;
}
int depiler (pile *p)
{
if (p ==NULL )
exit(1) ;
int nbdepiler =0 ;
element * elementdepiler =p->sommet ;
if( p !=NULL && p->sommet !=NULL)
{ nbdepiler = elementdepiler->nb ;
p->sommet =elementdepiler->next ;
free(elementdepiler );
return nbdepiler  ;
}}
void affiche (pile *p)
{ 
    if(p==NULL)
printf("fail");
    element *tmp  ;
    tmp=p->sommet ;
while (tmp!=NULL)
{printf("%d",tmp->nb);
tmp=tmp->next ; 
printf("\n");
}


}

int main()
{ int n , v , i ;
pile p ;
element np ;
printf("donner le nombre de valeurs : ");
scanf("%d",&v);
printf("donner les valeurs ");
for(i=0 ;i<v ; i++)
{scanf("%d",&n);
empiler(&p,n );
}
affiche(&p);
return 0 ;

}