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
	int t,n,m,i,s,a[301];
	scanf("%d%d",&n,&m);
	while(n!=0)
	{
		for(i=1;i<=300;i++) a[i]=0;
		i=0;s=n;
		for(;s>=1;)
		{
			t=m;
			s--;
			while (t>0)
			{
				i=((1+i)>n)? 1:(i+1);
				while (a[i]) i=((1+i)>n)? 1:(i+1);
				t--;
			}
			a[i]=1;

		}
		printf("%d\n",i); 
	    scanf("%d%d",&n,&m);
	}
}
