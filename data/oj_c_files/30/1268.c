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

int main()
{
	int n=0,i=0,sum=0;
	cin>>n;
    for(i=1;i<=n;i++)
	{
		if(i%7==0)
			sum=sum;
		else if(i/10==7)
		    sum=sum;
		else if(i-i/10*10==7)
			sum=sum;
		else
			sum=sum+i*i;
	}
	cout<<sum<<endl;
	return 0;
}