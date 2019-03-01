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
	int n,k,i,s,j;
	scanf("%d %d",&n,&k);printf("\n");
	i=1;
	do
	{   
		s=i;
		for(j=1;j<=n;j++)
		{
			s=s*n;
		    s=s+k;
			if(s%(n-1)!=0)break;
            else s=s/(n-1);
		}
		i=i+1;
	}while(j<n);
	printf("%d",s);
}
