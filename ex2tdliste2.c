#include<stdio.h>
#include<stdlib.h>
typedef struct {

int num ;
char nom [30],pr[30];
}info ;
typedef struct 
{
info data ;
struct liste * next ;
}liste ;
 liste * initialisation (liste * debut)
{debut =malloc(sizeof(liste));
if(debut ==NULL)
exit(1);
else 
debut->next=NULL ;
return debut ;
}
void affichel(liste *debut)
{liste* tmp=NULL ;
tmp=debut ;
if (tmp==NULL)
printf("NULL");
while(tmp!=NULL)
{printf("le nom est %s le prenom est %s le num est %d",tmp->data.nom,tmp->data.pr,tmp->data.num);
printf("-->\n");
    tmp=tmp->next ;  
}
}
void ajouteraudebut(liste * * debut , info b)
{
liste *p =NULL ;
p=(liste*)malloc(sizeof(liste)) ;
p->data= b ;
p->next =*debut ;
*debut = p ;
}
int main()
{
info b1 ;
char nomf[30];
liste *debut ; 
debut = initialisation (debut);
int n , i ;
FILE *fp ;
printf("donner le nom du fichier ");
scanf("%s",nomf);
fp=fopen(nomf,"w+");
printf("donner le nombre denregistrements ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("donner le nom le prenom et le numero de matricule ");
scanf("%s%s%d",b1.nom,b1.pr,&b1.num);
fprintf(fp,"%s\t",b1.nom);
fprintf(fp,"%s\t",b1.pr);
fprintf(fp,"%d\t",b1.num);
fprintf(fp,"%s","\n");
}
fclose(fp);
fp=fopen(nomf,"r");
for(i=0;i<n;i++)
{fscanf(fp,"%s",b1.nom);
fscanf(fp,"%s",b1.pr);
fscanf(fp,"%d",&b1.num);
ajouteraudebut(&debut,b1);
}
/*pour ajouter une nouvelle enregistrement à la fin 
printf("donner le nom le prenom et le numero de matrecule ");
scanf("%s%s%d",b1.nom , b1.pr ,&b1.num) ;
ajouteralafin(&debut , b1); */
affichel(debut);

return 0; }