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

int fenjie(int,int);

int main()
{
	int times,k,num;
	cin>>times;
	for(k=1;k<=times;k++)
	{
		cin>>num;
		cout<< fenjie(num,1)<<endl;
	}

	return 0;
}

int fenjie(int x,int y)
{
	int i,a=1;
	if(x<y) return 0;
	if(x==y) return 1;
	if(x>y)
	{
		if(y==1)
		{
			for(i=y+1;i<=x;i++)
			{
				if(x%i==0) a=a+fenjie(x/i,i);
			}
		}
		else
		{
			for(i=y;i<=x;i++)
			{
				if(x%i==0) a=a+fenjie(x/i,i);
			}
		}
		return a;
	}

}
