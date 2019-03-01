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
	int n,k,i,j,m[100];
	scanf("%d %d\n",&n,&k);
    for(j=1;;j++)         
	{
		m[n]=j;
	    for(i=n;i>=2;i--)
		{
			if((n*m[i]+k)%(n-1)==0)
                m[i-1]=(n*m[i]+k)/(n-1);
			else
				break;
		}
		if(i==1)
			break;
	}
    m[0]=n*m[1]+k;
	printf("%d",m[0]);
}