#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
int data ;
struct box *next ;
struct box *prev ;

}box ;
typedef box * liste ;
void afficher(box* debut )
{
box * tmp=NULL ;
tmp=debut ;
while (tmp!=NULL){
    printf("%d",tmp->data);
    printf("\n");
  tmp = tmp->next ;}
}
void ajouteralafin(liste *debut ,int x)
{box *tmp,*b ;
b=(box*)malloc(sizeof(box));
 b->next=b->prev=NULL ;
b->data = x ;
if(*debut==NULL)
*debut = b ;
else 
{
    tmp = *debut ;
while( tmp->next != NULL )
{tmp=tmp->next ;}
b->prev=tmp ;
tmp->next=b;
b->next=NULL ;
} }
void comp(box * debut )
{box*tmp ;
tmp=debut ;
int pg , pp, i ;
pg=tmp->data ;
pp=tmp->data ;
for(i=0;i<10;i++)
{if (tmp->data<pp)
{pp=tmp->data ;
}
if (tmp->data > pg)
pg=tmp->data ;
tmp=tmp->next ;
}
printf("la plus grande note est : %d",pg);
printf("\n");
printf("la plus petite note est : %d",pp);
}


int main ()
{ int i , x ; 
     box * head=NULL, *tmp=NULL ;
tmp=head ;
for(i=0;i<10;i++)
{printf("donner une note :");
scanf("%d",&x);
ajouteralafin(&head,x);
}
afficher(head);
comp(head);
return 0;
}