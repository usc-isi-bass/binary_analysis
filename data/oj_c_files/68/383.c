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
	int n,k;
	scanf("%d",&n);
	for(k=6;k<=n;k=k+2)
	{
        int a=1,b;
   loop:a=a+2;
		int i,x=sqrt(a);
		for(i=(x/2)*2+1;a%i!=0;)
			i=i-2;
			if(i!=1)
			goto loop;
		else
		{
			b=k-a;
			int j,y=sqrt(b);
			for(j=(y/2)*2+1;b%j!=0;)
				j=j-2;
				if(j!=1)
				goto loop;
			else
				printf("%d=%d+%d\n",k,a,b);
		}
		continue;
	}
}