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

void pai(char a[]);
int main(int argc, char *argv[])
{char a[100],b[100];
scanf("%s%s",a,b);
pai(a);
pai(b);
if(strcmp(a,b)==0)
printf("YES");
else
printf("NO");
    return 0;
}

void pai(char a[])
{int i,b,j;
for(i=0;i<=strlen(a)-1;i++)
{
                           for(j=i+1;j<=strlen(a)-1;j++)
                           if(a[i]>a[j])
                           {b=a[i];a[i]=a[j];a[j]=b;}
}
}
