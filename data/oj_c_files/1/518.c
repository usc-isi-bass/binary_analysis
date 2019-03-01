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

int prime(int n, int m )
{ 
	int i,total=1;
	if(n<m)return 0;
  
	for(i=m;i<=n;i++)
	{
		if(n%i==0)
			total+=prime(n/i,i);
	}
	return total;
}
void main()
{  
	int n,b[2000],b0,i;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{	
		scanf("%d",&b0);
		b[i]=prime(b0,2);
	}
	for(i=0;i<=n-2;i++)
	{
		printf("%d\n",b[i]);
	}
		printf("%d",b[n-1]);
}
