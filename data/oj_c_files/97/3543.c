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
	int sum,a[7]={0,0,0,0,0,0,0},i;
	cin>>sum;
	a[1]=sum/100;
	sum=sum-a[1]*100;
	a[2]=sum/50;
	sum-=a[2]*50;
	a[3]=sum/20;
	sum-=a[3]*20;
	a[4]=sum/10;
	sum-=a[4]*10;
	a[5]=sum/5;
	sum-=a[5]*5;
	a[6]=sum;
	for(i=1;i<=6;i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}