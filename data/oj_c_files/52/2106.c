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
	int i,k,j,n,m,a[100];
	int *p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    
	p=&a[n-m];
	for(k=n-m;k<n;k++,p++)
	    printf("%d ",*p);
	p=&a[0];
	for(j=0;j<n-m-1;j++,p++)
		printf("%d ",*p);
	printf("%d",a[n-m-1]);

}