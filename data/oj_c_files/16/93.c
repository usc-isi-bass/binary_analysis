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
	int n,i;
	int sv[4];
	cin>>n;
	if(n==10000)
	{
		cout<<"00001"<<endl;
	}
	else if(n/1000!=0&&n!=10000&&n>=1000)
	{
		for(i=0;i<4;i++)
		{
			sv[i]=n%10;
			n=n/10;
		}
		for(i=0;i<4;i++)
		{
			cout<<sv[i];
		}
		cout<<endl;
	}
	else if(n/100!=0&&n>=100)
	{
		for(i=0;i<3;i++)
		{
			sv[i]=n%10;
			n=n/10;
		}
		for(i=0;i<3;i++)
		{
			cout<<sv[i];
		}
		cout<<endl;
	}
	else if(n/10!=0&&n>=10)
	{
		for(i=0;i<2;i++)
		{
			sv[i]=n%10;
			n=n/10;
		}
		for(i=0;i<2;i++)
		{
			cout<<sv[i];
		}
		cout<<endl;
	}
	else
	{
		cout<<n<<endl;
	}
	return 0;
}