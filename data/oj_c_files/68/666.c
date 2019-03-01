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
	int N,n,m,i,j,flag;
	scanf("%d",&N);
	for(n=6;n<=N;n+=2)
	{
		for(m=3;m<n;m+=2)
			{
			flag=1;
			for(i=2;i<=sqrt(m);i++)
				if(m%i==0){flag=0;break;}
			if(flag==1)
				{
				m=n-m;
				for(i=2;i<=sqrt(m);i++)
					if(m%i==0){flag=0;break;}
				}
			else continue;
			if(flag==1){printf("%d=%d+%d\n",n,n-m,m);break;}
			m=n-m;
			}
	}
}