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

int main()
{char a[52],b[55],c[52];
scanf("%s %s",a,b);
int i,j,k,l;
i=strlen(a);j=strlen(b)-i;
for(k=0;k<=j;k++)
{for(l=k;l<=k+i-1;l++)
c[l-k]=b[l];
c[l-k]='\0';
if(strcmp(a,c)==0)
break;
}
printf("%d",k);
return 0;
}