#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main ()
{
    int lena,posi,i,j;
    char a[101][100],b[101],c[101],index=0,e[200];
    gets(e);
i=0;
for(j=0;j<strlen(e);j++)
{
if(e[j]==' ')
{
index++;
i=0;
}
else
a[index][i++]=e[j];

}
index++;
//printf("%d!\n",index);
    scanf("%s",b);
    scanf("%s",c);
    for(i=0;i<index;i++)
{
       if(strcmp(a[i],b)==0) printf("%s",c);
       else printf("%s",a[i]);
if(i!=index-1)printf(" ");
}
    return 0;
}
