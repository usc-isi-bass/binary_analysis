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

//****************************
//*????
int main()
{
	int m,n;
	double sum=0,a,b;
	int i,k,p;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>n;                //??for????n?
		sum=0;a=2;b=1;
		for(k=1;k<=n;k++)
		{
			sum=sum+a/b;
			p=a;
			a=a+b;
			b=p;                      //?????n??
     	}
		printf("%.3f\n",sum);
	}
	return 0;
}