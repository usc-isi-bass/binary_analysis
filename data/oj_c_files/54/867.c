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
	int i,j,k,l,m,n;
	scanf("%d %d",&n,&k);
	for(i=1;;i++)
	{
		m=i*(n-1);
	//	printf("i=%d\n",i);
		for(j=n;j>0;j--)
		{
	//		printf("j=%d\n",j);
			m=m*n/(n-1)+k;
	//		printf("m=%d\n",m);
			if(m%(n-1)!=0)break;
		}
	//		printf("j=%d\n",j);
		if(j==1||j==0)break;
	//	printf("j=%d\n",j);
		if(j>1)continue;
	}
	printf("%d",m);
}
