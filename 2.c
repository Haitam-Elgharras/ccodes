#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char nom[30];
char pr[30];
float note;
}info ;
typedef struct {
info data ;
struct liste * next ;
} liste ;
void rm (liste * *debut , info b1 )
{liste * p=NULL ;
int i ;
p=(liste*)malloc(sizeof(liste)) ;
liste *tmp=NULL ;
tmp=*debut ;
p->data=b1 ; 
p->next=NULL ;
if(tmp==NULL)
*debut = p ;
else {
while (tmp->next !=NULL)
tmp=tmp->next ;
tmp->next = p ;}
}
void affiche(liste * debut , int n )
{liste * tp=NULL ;
tp=debut ;
int i ; 
for(i=0;i<n;i++)
{
printf("le nome de l'etudiant num %d est :  %s \n",i+1,tp -> data.nom);
tp = tp->next ;
}}
void moyenne(liste *debut , int n )
{liste * tmp ; 
int i ;
float s=0 ;
tmp=debut ;
for(i=0;i<n;i++)
{s=s+tmp->data.note ;
tmp=tmp->next ;
}
s=(float)s/n;
printf("la moyenne est %f",s);}
void trier(liste* *debut )
{liste * tmp , *p ;
info ch ;
tmp=*debut ;
if(tmp!=NULL)
{for(tmp=*debut ;tmp->next!=NULL ;tmp=tmp->next)
{for(p=tmp->next;p!=NULL ;p=p->next)
{if(tmp->data.note > p->data.note)
{ch=tmp->data ;
tmp->data=p->data ;
p->data=ch ; }}}}}
int main()
{
int n , i,m ;
liste *debut =NULL ;

info b ;
printf("donner le nombre des etudiants ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("donner le nom le prenom et la note ");
    scanf("%s%s%f",b.nom,b.pr,&b.note);
    rm(&debut , b); //ajouteralafin
}
affiche(debut ,n);
moyenne(debut,n);
trier(&debut);
affiche(debut ,n);
return 0 ;}
