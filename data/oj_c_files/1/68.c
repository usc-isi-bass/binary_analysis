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


int f(int a,int b)
{
	if(a < b)
		return 0;
	int i,r =1 ;
	for(i = b; i <= a; i++ )
	{
		if( !(a%i) && i <= a/i )
		{
			r += f(a/i,i);
		}
	}
	return r;
}
void main()
{
	int n,m;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		int result = f(m,2);
		printf("%d\n",result);
	}
}
