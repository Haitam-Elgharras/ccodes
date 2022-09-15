#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
int  nombre ;
char nom[20];
}animal  ;
typedef struct {
int sommet ;
int taille ;
animal t[50];
}mypile ;

int estvide (mypile p)
{
return p.sommet==0 ;
}
int estpleine(mypile p)
{
    return p.taille==p.sommet ;
}
void empiler(mypile *p , animal an )
{
p->t[p->sommet++]=an ;//an variable fih nom w nombre , 1 case dyal t kathoz nom w ,nombre ++ katkhdm aprés
}
animal   depiler (mypile * p)
{ return p->t[--p->sommet ] ;
}
void afficher(mypile p) //passage par valeur ne change pas la pile
{
animal an ;
if(estvide(p))
{printf("la pile est vide ");
}
else
{while (!estvide(p))
{an=depiler(&p); //on travail dans depiler avec l'adress de la copie , donc la copie va depilé
printf("le nom est %s , le nombre des pattes est %d",an.nom , an.nombre );}}}

animal regarder(mypile p ) //fct qui affiche le plus haut animal avec la conservation de la pile
{animal an ;
an=depiler(&p);
return an ;
}
void dupliquer(mypile *p )
{animal an ;
//methode 1 :  an=regarder(*p) ; empiler(p,an) ; *p car p est un pointeur donc pour acceder à ça valeur on utilise *
an=depiler(p) ;
empiler(p,an) ;//p car empiler travail avec &p avec p pointeur donc p ~&p
empiler(p,an) ;
}
void echange(mypile *p )
{animal an1 , an2 ;
if(estvide(*p))
printf("impossible de faire l echange" );
else {
    an1=depiler(p);
    if(estvide(*p))
    {printf("il ya un seul element impossible de faire lechange ");
    empiler(p,an1);
    }
    else {
        an2=depiler(p);
        empiler(p,an1);
        empiler(p,an2);
    }
}

}
void supprimerbipedes(mypile *p)
{
mypile p2 ;
animal an ;
p2.sommet=0 ;
p2.taille=p->taille ;
while(!estvide(*p))
{an=depiler(p);
if(an.nombre!=2)
{empiler(&p2,an); }}
while(!estvide(p2))
empiler(p,depiler(&p2));//pour stocker ce qui != 2 dans p de nouveau
}
int main()
{mypile pa ;
animal an ;
int n=0 ; 
pa.sommet=0 ;
printf("donner la taille de la pile :");
scanf("%d",&pa.taille);
while(n==0);
{printf("donner le nom et le nombre de pattes ");
scanf("%s%d",an.nom,an.nombre );
if(!estpleine(pa))
empiler(&pa,an);
else
{printf("la pile est pleine ");
 n=1 ; }
}

return 0 ;}
