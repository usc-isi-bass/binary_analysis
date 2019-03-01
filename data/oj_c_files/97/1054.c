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
	int n;
	cin>>n;
	int i;
	for (i=0;(n-100*i)>=0;i++)
	{
	}
	i=i-1;
	cout<<i<<endl;
	n=n-100*i;
    for (i=0;(n-50*i)>=0;i++)
	{
	}
	i=i-1;
	cout<<i<<endl;
	n=n-50*i;
   for (i=0;(n-20*i)>=0;i++)
	{
	}
	i=i-1;
	cout<<i<<endl;
	n=n-20*i;
   for (i=0;(n-10*i)>=0;i++)
	{
	}
	i=i-1;
	cout<<i<<endl;
	n=n-10*i;
	for (i=0;(n-5*i)>=0;i++)
	{
	}
	i=i-1;
	cout<<i<<endl;
	n=n-5*i;
	cout<<n;

    return 0;
}