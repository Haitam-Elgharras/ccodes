#include<stdio.h>
#include<stdlib.h>
int main ()
{
FILE *fo ;
FILE *fc ;
char rm[500] , nom[20] , prenom[20] ;
int matricule ;
fo=fopen("haitam","r");
fc=fopen("haitamc.txt","w+");
if(fo==NULL || fc== NULL){
printf("there has been an error");
exit(1); }
while ( !feof(fo))
{fgets(rm,100,fo);
fputs(rm, fc);
}
fclose(fo);
fclose(fc);
fo=fopen("haitam","r");
fc=fopen("haitamc.txt","a");
printf("donner la nouvel enregistrement (nom , prenom , matricule) :");
scanf("%s %s %d",nom,prenom,&matricule);
fprintf(fc,"%s %s %d",nom,prenom,matricule);
fclose(fo);
fclose(fc);
fc=fopen("haitamc.txt","r");
while (!feof(fc)) {
fgets(rm,500,fc);
puts(rm);
}

return 0 ;

}