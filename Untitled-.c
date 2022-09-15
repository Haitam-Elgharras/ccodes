#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct 
{ int x ; 
struct box * next ;
struct box * prev ;
}box;
typedef box* liste ;
void rem1(liste *debut,int e)
 {
box *tmp , * b ;
b=(box*)malloc(sizeof(box));
b->next =b->prev = NULL ;
b->x=e ;
if(*debut!=NULL)
{tmp=*debut;
while(tmp->next !=NULL)
tmp=tmp->next ;
tmp->next =b; 
b->prev =tmp ;}
else 
*debut = b ;
}
void affiche1(box* l)
{box* tmp ;
tmp=l ;
while( tmp != NULL)
{printf("\n");
    printf("%d",tmp->x);
printf("\n");
tmp=tmp->next ;}
}
void renverser(liste * debut  )
{box * tmp=NULL ,*p=NULL ; 
tmp=*debut ; 
int ch ;
for(tmp=*debut ; tmp->next !=NULL ; tmp=tmp->next)
{for(p=tmp->next ; p=!NULL ; p=p->next)
{
ch=tmp->x ;
tmp->x=p->x ;
p->x=ch ;
}
}
}
int main ()
{int x1 ,i  ;
     box * l=NULL , *tmp=NULL   ;
tmp=l ;
printf("pour remplir la liste ecrire 17 , 38 , 10 , 25 , 72 succesivement ");
for(i=0;i<5;i++)
{scanf("%d",&x1);
rem1(&l , x1);}//on peut ecrire rem1(17) rem1(10) ..... 
affiche1(l);
printf(" \n cest linverse ");
renverser(&l);
affiche1(l);
return 0 ; }