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
	int n,k,num,i,t;
	cin>>n>>k;
	num=k;
	t=k;
	do
	{
		num=num+n;
		t=num;
		for(i=n-1;i>=1;i--)
		{
			if(num%(n-1)!=0)
				break;
			else
				num=num*n/(n-1)+k;
		}
		num=t;
	}while(i>=1);
	for(i=1;i<n;i++)
	{
		num=num*n/(n-1)+k;;
	}
	cout<<num<<endl;
	return 0;
}
