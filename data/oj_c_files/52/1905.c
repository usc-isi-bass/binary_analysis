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
	int a[100]={-1},*p,*q,n,m,i,k=0;
	scanf("%d %d\n",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	q=p+n-m+1;
	printf("%d",*(p+n-m));	
	while(k<n-1)
	{
		if(*q==0)q=p;
		printf(" %d",*q);
		k++;
		q++;		
	}
	return 0;
}