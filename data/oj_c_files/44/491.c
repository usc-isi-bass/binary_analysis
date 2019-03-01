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

int reverse(int num)
{
	int i,a;
		while(1)
		{
			if (num%10==0)
		     num=num/10;
			else
				break;
		}
		while(num>0)
		{

			a=num%10;
			cout<<a;
			num=(num-a)/10;
		}
		cout<<endl;
		return 1;
	}
int main()
{
	int i,num;
	for(i=0;i<=5;i++)
	{
		cin>>num;
		if(num==0)
			cout<<"0"<<endl;
		else
		{
			if (num>0)
				reverse(num);
			else
			{
				cout<<"-";
				reverse(-num);
			}
		}
	}
	return 0;
}