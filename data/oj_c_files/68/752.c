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
	int k,i,j,t,s,n;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(k=3;k<=i/2;k=k+2)
		{
			j=3;
			while(k%j!=0 && j<=sqrt(k)) j=j+2;
			if(j>sqrt(k))
			{
				t=i-k;
				if (t%2==0) continue;
				s=3;
				while(t%s!=0 && s<=sqrt(t)) s=s+2;
				if(s>sqrt(t))
				{
					printf("%d=%d+%d\n",i,k,t);
					break;
				}
			}
		}
	}
}
