#include<stdio.h>
#include<stdlib.h>
int main ()
{ 
FILE *ff ;
int matricule , n=0 , i ;
char nom [20], nomf [20] ;
char prenom [20];
char tr [500];
printf("donner le nom de fichier");
scanf("%s",nomf);
ff=fopen(nomf,"w+");
printf("donner le nombre d'enregistrements");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("donner les informations d'enregistrements (nom , prenom , matricule) n %d",i);
scanf("%s",nom);
scanf("%s",prenom);
scanf("%d",&matricule);
fprintf(ff,"%s %s %d\n",nom,prenom,matricule);
}
fclose(ff);
ff=fopen(nomf,"r+");
printf("les info d'enregistrements sont :");
while (!feof(ff)) {
fgets(tr,500,ff);
puts(tr);
}
fclose(ff);
return 0 ;
}