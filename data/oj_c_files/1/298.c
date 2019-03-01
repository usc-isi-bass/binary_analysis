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

int numcheck(int num,int a)//???????num??????????a??????
{
	int i=0,sum=0; 
	if(num==1)//??1????????
		return 1;
	else if(num<a)
		return 0;
	else
	{
		for(i=a;i<=num;i++)//?????????????????
		{
			if(num%i==0)
				sum=sum+numcheck(num/i,i);
		}
	}
	return sum;
}
int main()
{
	int n=0,i=0,num=0,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>num;
		sum=numcheck(num,2);
		cout<<sum<<endl;
	}
	return 0;
}