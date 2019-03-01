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
	int num,i,flag,t,ans;
	cin>>num;
	ans=0;
	for (i=1;i<=num;i++)
	{
		flag=0;
		if (i%7==0) flag=1;
		else
		{
			t=i;
			while (t>=1)
			{
				if (t%10==7) flag=1;
				t=t/10;
			}
		}
		if (flag==0) ans=ans+i*i;
	}
	cout<<ans;
	return 0;
}