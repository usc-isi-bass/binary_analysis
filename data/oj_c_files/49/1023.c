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

main()
{int i,j,k,l,m=0,s=0;
	char c[500];
	scanf("%s",c);
k=strlen(c);
for(i=2;i<=k;i++)
{
	for(j=0;j<=k-i;j++)
{
for(l=0;l<=i/2-1;l++)
if(c[l+j]==c[j+i-l-1])m++;

if(m==i/2)
{for(l=0;l<=i-1;l++)
printf("%c",c[j+l]);
s++;	}
m=0;
if(s!=0)
printf("\n");
s=0;}

}

}