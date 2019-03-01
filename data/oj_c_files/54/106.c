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
	int n,k,w;
	int m;int s=0,i;
	scanf("%d %d",&n,&k);
	
	for(m=k+n;;m++)
	{	s=0;
	w=m;
		for(i=0;i<n;i++)
		{
		if((w-k)%n==0&&w>k)
		{w=(w-k)/n*(n-1);
		s=s+1;}
			
		else
			break;
		}
		if(s==n)
		break;

	}
	printf("%d\n",m);


}