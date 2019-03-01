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

int factor(int,int);
int main()
{
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		cout<<factor(num,2)<<endl;
	}
	return 0;
}
int factor(int n,int min)
{
	int i;
	int num=1;
	if(n<min)
		return 0;
	else
	{
		for(i=min;i<n;i++)
		{
			if(n%i==0)
				num+=factor(n/i,i);
		}
	}
	return num;
}