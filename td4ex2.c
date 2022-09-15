#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
float data ;
struct liste  *next ;
struct liste *prev ;
}liste ;
void ajouteralafin(liste * *debut , int x )
{
liste *tmp ;
liste * p ;
p=(liste*)malloc(sizeof(liste));
p->next=p->prev=NULL ;
p->data=x ;
tmp=*debut ;
if(tmp==NULL)
*debut =p ;
else {
while (tmp->next!=NULL)
tmp=tmp->next ;
tmp->next=p ;
p->prev = tmp ;
}}
int compter(liste * debut )
{liste *tmp ;
int i=0 ;
tmp = debut ; 
while(tmp!=NULL)
{i++ ;
tmp=tmp->next ;
}
printf("le nombre des notes est %d ",i);
return i ;
}
float moyenne (liste *debut , int n )
{liste * tmp ;
float m=0 ;
tmp =debut ;
while(tmp!=NULL)
{m=m+tmp->data ;
tmp=tmp->next ;
}
m=(float)m/n ;
printf("la moyenne est %f",m);
return m ;
}
void comparer (liste * debut , float m )
{liste * tmp ;
int np=0 , ng=0 ,ne =0 ;
tmp=debut ;
if(tmp==NULL)
exit(1);
else {
while (tmp!=NULL)
{
if(tmp->data>m )
{printf("%f est plus grande que la moyenne %f\n",tmp->data,m);
ng++;
}
else {
if(tmp->data<m )
{printf("%f est plus petit que la moyenne %f\n",tmp->data,m);
np++;
}
else {
printf("%f est egal a la moyenne %f\n",tmp->data,m);
ne++;
}}
tmp=tmp->next ;
 }}
 printf("le nombre des plus grands est %d plus petit est %d egals est %d",ng,np,ne);
 }
void position (liste * debut )
{liste * tmp=NULL ;
int ip=1 , ig=1 ,i=1 ;
float pp , pg ;
tmp=debut ;
if(tmp==NULL)
exit(1);
else {
{pp=tmp->data ;
pg=tmp->data ; 
    while(tmp!=NULL)
    {tmp=tmp->next ;
    i++ ;
    if(tmp->data>pg)
{pg=tmp->data ;
ig=i ;
}
 if(tmp->data<pp)
{pp=tmp->data ;
ip=i ;
}
}}
printf("la plus ptite note est %f est ca position est %d \n",pp,ip);
printf("la plus grande note est %f est ca position est %d",pg,ig);
}
}
int main() 
{
liste * debut=NULL ;
int  s , n  ;
float x , m  ;
printf ("donner une note entre 0 et 20 ");
scanf("%f",&x);
while(x>20 || x< 0)
{printf("essayer ") ;
scanf("%f",&x);
}
while(x<=20 && x>= 0)
{ajouteralafin(&debut ,x);
scanf("%f",&x);
}
n=compter(debut ) ;
printf("\n");
m=moyenne(debut, n);
printf("\n");
comparer(debut, m);
printf("\n");
position(debut);
return 0;
}