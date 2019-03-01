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
	int n,a[50],i,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) if(a[k]<a[i]) k=i;
	printf("%d\n",a[k]);
	if(k==0) a[k]=a[1];
	else a[k]=a[0];
	for(i=0;i<n;i++) if(a[k]<a[i]) k=i;
	printf("%d",a[k]);
}


