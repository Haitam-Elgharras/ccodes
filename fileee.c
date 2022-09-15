#include<stdio.h>
#include<stdlib.h>

int main ()
{FILE *fp ;
int  c ;
fp = fopen("file","w");
if (fp==NULL)
{
    puts("error");
    exit(1);
}
fputc('5',fp);
fclose(fp);

return 0 ;
}