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
	int a[100],n,i,b=0,c=0,d=0,e=0;
	double f,g,h,k;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
	if(a[i]<=18)
		b=b+1;
	if(a[i]>=19&&a[i]<=35)
		c=c+1;
	if(a[i]>35&&a[i]<=60)
		d=d+1;
	
		e=n-b-c-d;
}
f=((double)b/n)*100;
g=((double)c/n)*100;
h=((double)d/n)*100;
k=((double)e/n)*100;
printf("1-18: %.2f%%\n", f);
printf("19-35: %.2f%%\n", g);printf("36-60: %.2f%%\n", h);printf("60??: %.2f%%", k);
		}

