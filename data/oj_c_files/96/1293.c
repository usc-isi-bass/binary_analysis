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
	char a[200];
	cin.getline(a,200);
	int b[200]={0},c[200]={0},len=strlen(a);
	for (int i=0;i<len;i++)
	{
		b[i]=(int)(a[i]-'0');
	}
	int sum=0;
	for (int i=0;i<len-1;i++)
	{
		if (b[i]>=13)
		{
			c[sum]=b[i]/13,b[i+1]+=b[i]%13*10;
			sum++;
		}
		else
		{
			if (sum==0)
			{
				b[i+1]+=b[i]*10;
			}
			else
			{
				c[sum]=0;
				b[i+1]+=b[i]*10;
				sum++;
			}
		}
	}
	c[sum]=b[len-1]/13;
	b[len-1]%=13;
	for (int i=0;i<=sum;i++)
	{
		cout<<c[i];
	}
	cout<<endl;
	cout<<b[len-1]<<endl;






















	return 0;
}