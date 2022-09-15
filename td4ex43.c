#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct 
{ int x ; 
struct box * next ;
struct box * prev ;
}box;
typedef box* liste ;
 void rem1(liste *debut,int e) //ajouteralafin
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
void affiche2 (box*l)
{box* tmp ;
tmp=l ;
printf("\n");
while ( tmp!= NULL)
{ if(tmp->prev!=NULL )
    {printf("%d-->",tmp->x);}
tmp=tmp->next ; 
}
}
void affiche3 (box*l)
{box* tmp , *b ;
tmp=l ;
b=tmp->next ;
printf("\n");
while ( b->next != NULL )
{
    printf("%d-->",tmp->x);
    tmp=tmp->next ;
    b=tmp->next ; 
}
}
void test(box *l,int tester )
{box * tmp ;
int b=0 , i ;
tmp=l ;
for(i=0;i<5;i++)
{if(tmp->x==tester)
b=1 ;
tmp=tmp->next ;
}
if(b==1)
printf(" %d appartient a la liste ",tester);
else printf("%d n appartient pas a la liste ",tester);
}
void trier(liste *l)//*l=*debut ;
{
box * tmp, *b  ;
int v ;

for(tmp=*l ;tmp->next!=NULL;tmp=tmp->next )
{for(b=tmp->next;b!=NULL;b=b->next)
{
if(tmp->x > b->x)
{ v=tmp->x ;
tmp->x=b->x ;
b->x = v ;
}}}
}
void renverser(box * * debut  )
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


void afficheindice(box* l , int r )
{int i=1 ;
box * tmp ;
tmp=l ;
    while(tmp->x!=r && tmp!=NULL)
{
tmp=tmp->next ;
i++;
}
if(tmp==NULL)
printf("l element nexist pas ") ;
else printf("l'indice est %d",i);

}
supp(liste * l , int v )
{box * tmp  , *b=NULL ,* p=NULL;
tmp = *l ;
if (tmp!=NULL)
{while(tmp->x!=v && tmp!=NULL)
tmp=tmp->next ;
if(tmp!=NULL)
{if(tmp->prev==NULL)
{b=tmp ;
*l=tmp->next ; 
free(b);
}
else {
   
    if(tmp->next ==NULL)
    {
        tmp->prev ->next=NULL ;
        free(tmp) ;
    }
    else {
    tmp->prev ->next =tmp->next ;
   tmp->next->prev =tmp->prev ;
    free(tmp);
    }
}}}
}
int main ()
{int x1 ,i  ;
     box * l=NULL , *tmp=NULL   ;
tmp=l ;
printf("pour remplir la liste ecrire 17 , 38 , 10 , 25 , 72 succesivement ");
for(i=0;i<5;i++)
{scanf("%d",&x1);
rem1(&l , x1);}//on peut ecrire rem1(17) rem1(10) ..... 
printf("\n");
affiche1(l);
affiche2(l);
affiche3(l);
printf("\n");
test(l,10);
printf("\n");
test(l,35);
trier(&l);
affiche1(l);
rem1(&l,12);
affiche1(l);
renverser(&l);
printf("\n c'est l'inverse");
affiche1(l);
afficheindice(l,17);
supp(&l , 38);
affiche1(l);
return 0; }