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
	int n,k,m,i,j,t;
	scanf("%d %d",&n,&k);
	j=1;
	while(j>0)
	{
		t=1;
		m=n*j+k;
		i=2;
		while(i<=n)
		{
			if(m%(n-1)==0)
			{
				m=(m/(n-1))*n+k;
				i=i+1;
			}
			else 
			{
				t=0;
				break;
			}
		}
		if(t==1)
			break;
		else j=j+1;
	}
	printf("%d",m);
}