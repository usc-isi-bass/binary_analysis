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
int n,a[101],i,*pt1,*pt2,c;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
	if(i==0)
		scanf("%d",&a[i]);
	else
		scanf(" %d",&a[i]);
}
for(i=0;i<(n/2);i++){
pt1=&a[n-1-i];
pt2=&a[i];
c=*pt1;
a[n-1-i]=*pt2;
a[i]=c;
}
for(i=0;i<n;i++)
{
	if(i==0)
printf("%d",a[i]);
	else
printf(" %d",a[i]);
}
return 0;
}
