#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
char nom[30];
char pr[30];
int nb ;
struct nodes *next ;
} nodes ;
int main()
{
int n , i,m ;
char nomf[40];
//char nomf[30] ,nom[30] , prp[30] ;
FILE *fp ;
printf("donner le nom du fichier");
scanf("%s",nomf);
fp=fopen(nomf , "w+");
printf("donner le nombre denregistrements");
scanf("%d",&n);
nodes p ;
for(i=0;i<n;i++)
{printf("donner le nom et le prenom et le numero de matricule ");
scanf("%s",&p.nom);
fprintf(fp,"%s\n",p.nom);
scanf("%s",&p.pr);
fprintf(fp,"%s\n",p.pr);
scanf("%d",&p.nb);
fprintf(fp,"%d\n",p.nb);
}
fclose(fp);
nodes *head=NULL ;
head = (nodes*)malloc(sizeof(nodes));
nodes *tmp ;
tmp=head ;
for(i=0;i<n;i++)
{fgets(tmp->nom,1000,fp);
fgets(tmp->pr,1000,fp);
fscanf(fp,"%d",&tmp->nb);
tmp->next=malloc(sizeof(nodes));
tmp= tmp->next ;
}
tmp=head ;
for(i=0;i<n;i++)
{printf("%s",tmp->nom);
printf("%s\n",tmp->pr);
printf("%d\n",tmp->nb);
tmp= tmp->next ;
}
return 0 ;}