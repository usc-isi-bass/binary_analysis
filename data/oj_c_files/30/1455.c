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
	int i=1,sum=0;
while(i<=n)
{
	if(i%7==0)
	{
	i++;
	}
	else
	{
		if(i%10==7)
		{
		     i++;
		}
		else
		{
			if(i-70>0&i-70<10)
			{
			    i++;
			}
			else
			{
				sum=sum+i*i;
				i++;
			}
		}
	}
}
cout<<sum<<endl;
return 0;
}