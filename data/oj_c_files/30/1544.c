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
	int n,m=0,sum=0;
	cin>>n;
	if (n<100)
	{for (m=1;m<n+1;m++)
			{
				if (m%7==0||m%10==7||floor(m/10)==7)
				sum = sum;
			    else sum=sum+m*m;
			}
			cout<<sum<<endl;
	}
	else
		cout<<"no count"<<endl;
}


