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

int fenjie(int x ,int b)
{
	int i,z=0,c;
	for(i=b;i<=x;i++)
	{
		if(x==i)
			z=z+1;
		else if(x%i==0)
		{
			c=x/i;
			z=z+fenjie(c,i);
		}
	
	}
	return(z);
}
void main()
{
	int n,i,num,a;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		num=fenjie(a,2);
		printf("%d\n",num);
	}

}



