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
	double n;
	cin >> n;
	int i,j;
	int k,l;
	double t,s;
	for(i=3;i<=n/2;i+=2)
	{
		t=sqrt((double)i);
		for(j=2;j<=t;j++)
		{
			if(i%j==0)
				break;
		}
		if(j>t)
		{
			l=n-i;
			s=sqrt((double)l);
			for(k=2;k<=s;k++)
			{
				if(l%k==0)
					break;
			}
			if(k>s)
			{
				cout << i << " "<< l<<endl;
			}
		}
	}
	return 0;
}	