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
{
int *p,m,n,i,a[200]={0};
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
p=a;
for(p=a+n+m-1;p>=a;p--)
	*p=*(p-m);
for(p=a;p<a+m;p++)
	*p=*(p+n);
for(p=a;p<a+n-1;p++)
	printf("%d ",*p);
printf("%d",*p);
}