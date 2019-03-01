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
	int a[300],b[300],n,i,j=1,*p,*q;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    b[0]=a[0];
	for(p=a+1;p<a+n;p++)
	{
		for(q=p-1;q>=a;q--)
		{if(*q==*p) goto loop;}
		b[j]=*p;
		j++;
loop:  continue;
	}
for(i=0;i<j-1;i++)
printf("%d,",b[i]);
printf("%d",b[j-1]);
}