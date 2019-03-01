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

int p(int m);
int main()
{
	int n,i=5;
	cin>>n;
for(i=6;i<=n;i=i+2)
{
		int a=0,b=0;
		for(a=2;a<=i-2;a++)
		{	
				if(p(i-a)&&p(a))
				{	cout<<i<<"="<<a<<"+"<<i-a<<endl;
			     break;
				}
		
		}

	}
	return 0;
}

  





int p(int m)
	{
		for(int j=2;j<=sqrt((float)m);j++)
		{
			if(m%j==0)
				return 0;
		}
		return 1;
	}