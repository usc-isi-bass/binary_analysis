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

/////?????/////
int f(int x,int y)
{
	int z,z1,z2,q;
	if((y==1)||(x==0)) z=1;
	else
	{
		if((x<y)) z=f(x,x);
		else 
		{
			z=f(x,y-1)+f(x-y,y);
		}
	}
	return z;
}
/////???/////
main()
{
	int t,m,n,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		k=f(m,n);
		printf("%d\n",k);
	}
	return 0;
}