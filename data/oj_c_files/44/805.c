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

void reverse(int num)
{
	int a=0;
	if(num==0)
		cout<<0<<endl;
	if(num<0)
	{
		int b=1,c=0,biaoji=0;
		cout<<'-';
		num=(-1)*num;
		while(true)
		{
			a=(num/b)%10;
			c=num/b;
			if(a>0)
			{
				cout<<a;
				biaoji=1;
				b=b*10;
				break;
			}
			else b=b*10;
		}
		while (biaoji)
		{
			a=(num/b)%10;
			c=num/b;
			if(a>=0&&c>=10)
			{
				cout<<a;
				b=b*10;
			}
			else break;
		}
		if(c>0)
			cout<<c;
		cout<<endl;
		num=(-1)*num;
	}
	if(num>0)
	{
		int b=1,c=0,biaoji=0;
		while(true)
		{
			a=(num/b)%10;
			c=num/b;
			if(a>0)
			{
				cout<<a;
				biaoji=1;
				b=b*10;
				break;
			}
			else b=b*10;
		}
		while (biaoji)
		{
			a=(num/b)%10;
			c=num/b;
			if(a>=0&&c>=10)
			{
				cout<<a;
				b=b*10;
			}
			else break;
		}
		if(c>0)
			cout<<c;
		cout<<endl;
	}
}
int main()
{
	int c=0,n;
	for(c=0;c<6;c++)
	{
		cin>>n;
		reverse(n);
	}
	
	return 0;
}