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
box * tmp ;
while (tmp!=NULL){
    printf("%d",tmp->data);
    printf("\n");
tmp=tmp->next ;}
}
void comp(box * debut )
{box *tmp ;
tmp=debut ;
int pg , pp, i ;
pg=pp=tmp->data ;
for(i=0;i<10;i++)
{if (tmp->data<pp)
{pp=tmp->data ;
}
if (tmp->data > pg)
pg=tmp->data ;
tmp=tmp->next ;
}
printf("la plus grande note est : %d",pg);
printf("la plus petite note est : %d",pp);
}


int main ()
{ int i ; 
     box * head=NULL, *tmp=NULL , *b ;
b=(box*)malloc(sizeof(box));
tmp=head ;
for(i=0;i<10;i++)
{printf("donner une note :");
scanf("%d",tmp->data);
tmp->next=malloc(sizeof(box));
tmp=tmp->next ;

}
afficher(head);
comp(head);
return 0;
}