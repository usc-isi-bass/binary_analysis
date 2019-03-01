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
{
	char a[20],b[20];
	int i,j,k;
	int m,n;
	m=0;
	n=0;
    for(i=0;i<20;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]==' ')
			break;
	}
   for(j=0;j<20;j++)
	{
		scanf("%c",&b[j]);
		if(b[j]=='\n')
			break;
	}
for(k=0;k<i;k++)
{
	m=m+a[k];
}
for(k=0;k<j;k++)
{
	n=n+b[k];
}
if(m==n)
printf("YES");
else 
printf("NO");
  return 0;
}

