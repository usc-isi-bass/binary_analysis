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

void main()
{
	char a[100000];int i,j=0,k=0,z,b[310];
	gets(a);z=strlen(a);
for(i=0;i<z;i++)
{
	if(a[i]!=' ')j++;
	if(a[i]==' '||i==z-1){b[k]=j;k++;j=0;}
}
for(i=0;i<k-1;i++)
{if(b[i]!=0)
printf("%d,",b[i]);}
if(b[k-1]!=0)
printf("%d",b[k-1]);
}

