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

	int n,k;
	int p,m,i;
	int q;
	int sign=1;

	scanf("%d",&n);

	for(k=6;k<=n;k=k+2)
	{
		for(p=3;p<=k/2;p=p+2)
		{
			sign=1;
			m=(int)sqrt((double)p);
			for(i=3;i<=m;i=i+2)
			{
				if(p%i==0)
				{
					sign=0;
					break;
				}
			}
			
			if(sign==0)
				continue;
			
			q=k-p;
			m=(int)sqrt((double)q);
			for(i=3;i<=m;i=i+2)
			{
				if(q%i==0)
				{
					sign=0;
					break;
				}
			}
			if(sign==1){
				printf("%d=%d+%d\n",k,p,q);
				break;
			}
		}

	}

}