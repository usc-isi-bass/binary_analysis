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
	int n,k,i;
	int apple[100]={0};
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		apple[i]=k;
	do
	{
		apple[0]=apple[0]+n;
		for(i=1;i<n;i++)
		{
			if(apple[i-1]%(n-1)!=0)
				break;
		    else
			apple[i]=apple[i-1]*n/(n-1)+k;
		}
	}while(i<n);
	printf("%d",apple[n-1]);
}
	
