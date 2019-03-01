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
int i,n,now,a[100],j=1,s;
scanf("%d",&n);
scanf("%d",&a[0]);
for(i=1;i<n;i++)
{
scanf("%d",&now);
for(s=0;s<j;s++)
	{
		if (now==a[s])  break;
		if (now!=a[s]&&(s==j-1)) {a[j]=now;j++;}
	}
}
for(i=0;i<j-1;i++)
printf("%d,",a[i]);
printf("%d",a[j-1]);
}