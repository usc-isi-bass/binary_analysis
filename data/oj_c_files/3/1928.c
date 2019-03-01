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
	int n,k,a[1001],j,i,count=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)//???a[i]????????
		{
			if(a[i]+a[j]==k)
				count=count+1;//??????
		}
		if(count==0)//?????
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
		return 0;
}
