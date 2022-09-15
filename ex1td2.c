#include<stdio.h>
#include<stdlib.h>
//l'autre method 2.c
typedef struct {
char nom[30];
char pr[30];
int note;
struct nodes *next ;
} nodes ;
void moyenne(nodes *head ,int n )
{
    int x=0,i ;
    nodes *p=(nodes*)malloc(sizeof(nodes)) ;
    p=head;
for(i=0;i<n;i++)
{ x=x+p->note ;
p = p->next ;

}
printf("la moyenne du classe est : %f ",(float)x/n );
}
int main()
{
int n , i,m ;
nodes *head = NULL ;
nodes *second=NULL ;
second = head ;
head =(nodes*)malloc(sizeof(nodes));
second = (nodes*)malloc(sizeof(nodes));
printf("donner le nombre des etudiants :");
scanf("%d",&n);
second = head ;
printf("le nombre des etudiants est : %d \n", n);
for(i=0;i<n;i++)
{
printf("donner le nom le prenom et la note de l'etudiant n %d ",i+1);
scanf("%s",&second -> nom);
scanf("%s",&second -> pr);
scanf("%d",&second -> note);
second -> next = malloc(sizeof(nodes));
second = second->next ;
}
second = head ;
for(i=0;i<n;i++)
{
printf("le nome de l'etudiant num %d est :  %s \n",i+1,second -> nom);
second = second->next ;
}
moyenne(head,n);

return 0 ;

}