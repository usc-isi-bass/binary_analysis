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
	int n,a,b,i,k;
	cin>>n;
	for(a=2;a<=(n/2);a++)
	{
		int j=0;
		b=n-a;
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
				j=1;
		}
			for(k=2;k<=sqrt(b);k++)
			{
				if(b%k==0)
					j=1;
			}


		if(j==0)
			cout<<a<<" "<<b<<endl;
	}
	return 0;
}