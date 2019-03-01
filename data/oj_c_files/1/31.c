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


int calc(int p,int t);

int main()
{
	int  m,n,ans;


	scanf("%d",&m);

	while (m--)
	{
		scanf("%d",&n);
		ans=calc(2,n);
		printf("%d\n",ans);   
	}


	return 0;

}

int calc(int p,int t)
{
	int i,a;
	
	a=1;
	for (i=p;i<=sqrt(t);i++)
		if (t%i==0) 
			a=a+calc(i,t/i);
	return a;
	
}