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
	long m,n,r,s;
	long t[21],p[21]={0},q=0;
	long x,y,z;
	scanf("%ld%ld",&m,&n);
	for(r=m;r<=n;r++)
	{
		x=0;y=1;z=r;
		do
		{
		t[x++]=z%10;
		z=z/10;
		}
		while(z!=0);
		for(s=0;s<=x-1;s++)
			if(t[s]!=t[x-1-s]) y=0;
		if(y==1)
		{
			for(s=2;s<=r-1;s++)
				if(r%s==0) y=0;
		}
		if(y==1) p[q++]=r;
	}
	if(q==0) printf("no\n");
	else if(q==1) printf("%ld\n",p[0]);
	else
	{for(r=0;r<=q-2;r++)
		printf("%ld,",p[r]);
	printf("%ld",p[q-1]);}
}



