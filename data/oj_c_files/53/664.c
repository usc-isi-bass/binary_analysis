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
	int a[301],*p,n,i,j,k=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	p=a;
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{for(j=0;j<i;j++)
		if((*(p+i)-*(p+j))!=0) k+=1;
		if(k==i) 
			printf(",%d",*(p+i));
	k=0;}
	return 0;
}
