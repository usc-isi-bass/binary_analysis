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
	int i,j,k,n,m,p,q;
	scanf("%d",&n);
	for(k=6;k<=n;k=k+2)
	{
		for(i=3;i<=n/2;i++)
		{
			p=sqrt(i);
			for(m=2;m<=p;m++)
			if(i%m==0)break;
			if(m>p)
			{
				j=k-i;
				q=sqrt(j);
				for(m=2;m<=q;m++)
				if(j%m==0)break;
				if(m>q){printf("%d=%d+%d\n",k,i,j);break;}
			}
		}
	}
}