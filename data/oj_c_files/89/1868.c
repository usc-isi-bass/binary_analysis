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
	int n,know,a,b,c=0;
	scanf("%d",&n);
	int *p= (int*)malloc(n*sizeof(int)) ;
	int *q= (int*)malloc(n*sizeof(int)) ;
	for(int i=0;i<n;i++)
	{
		q[i]=0;p[i]=0;
	}
	while(1)
	{
		scanf("%d %d",&a,&b);
		if(a==0&&b==0)
			break;
		q[b]=q[b]+1;
		p[a]=1;
	}
	for(int i=0;i<n;i++)
		if(p[i]==0 && q[i]==n-1)
		{
			printf("%d",i);
			c=1;
		}
		if(c==0)
	printf("NOT FOUND");
	return 0;
}

