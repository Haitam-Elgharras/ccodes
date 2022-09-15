#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
    int nm ;
    char nom[20],pr[20];
}info ;
int main()
{char mf[10] ,c ;
int n , i  ;
info p;
FILE *fp ;
printf("donner le nom de ficher ");
scanf("%s",mf);
printf("donner le nombre denregidtrements ");
scanf("%d",&n);
fp=fopen(mf,"w+");
if(fp==NULL)
{printf("ereur");
exit(1);}
for(i=0;i<n ; i++)
{printf("donner le nom , le prenom , et le numero de matricule du person num  %d ",i+1);
scanf("%s",p.nom);
fprintf(fp,"%s ",p.nom);
scanf("%s",p.pr);
fprintf(fp,"%s ",p.pr);
scanf("%d",&p.nm);
fprintf(fp,"%d ",p.nm);
fprintf(fp,"%s","\n");
}
fclose(fp);//tres important
if(fp==NULL)
{printf("ereur");
exit(1);}
fp = fopen(mf,"r+");
while (!feof(fp))
{c=fgetc(fp);
printf("%c",c);
}
return 0;
}