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
	for(i=6;i<=n;i=i+2)
	{
		int j=3;
		int k=3,t=0,l=0,p=0;
		do
		{
		   p=0;
		   t=0;
		   l=0;
			for(k=3;k<=sqrt(j);k++)
		{
			if(j%k==0)
				t=1;
		}
		if(t==0)
		{
			for(k=3;k<=sqrt(i-j);k++)
			{
				if((i-j)%k==0)
					l=1;
			}
		}
		if(t==0&&l==0)
		{
			cout<<i<<"="<<j<<"+"<<i-j<<endl;
			//break;
			p=1;
		}
		j=j+2;
		}
		while(p==0);
	}
	return 0;
}