#include<stdio.h>
#include<stdlib.h>
typedef struct {
char nom [30];
char pr [30];
}p ;
int main()
{ FILE *fp ;
FILE *fb;
p p1 ;
fp=fopen("data.txt","r+");
fb=fopen("data1.bin","wb+");
while (!feof(fp))
{fscanf(fp,"%s %s",p1.nom , p1.pr) ;
fwrite(&p1,sizeof(p),1,fb);
}
fb=fopen("data1.bin","ab");
printf("donner un nom ");
scanf("%s %s",p1.nom , p1.pr);
fwrite(&p1,sizeof(p),1,fb);
fclose(fp);
fclose(fb);
fb=fopen("data1.bin","rb+");
while (!feof(fp))
{fread(&p1,sizeof(p),1,fb);
printf("%s %s ",p1.nom ,p1.pr);
printf("\n");
}
return 0 ;
}