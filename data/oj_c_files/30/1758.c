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
	int n,sum=0,i,b;
	int a[100];
	cin>>n;
	for(i=1;i<=n;i=i+1)
	{
		b=0;
		if(i%7==0)b=1;
		if(i%10==7)b=1;
		if((i-i%10)%100==70)b=1;
		if(b==0)sum=sum+i*i;
	}
	cout<<sum;
	return 0;
}

