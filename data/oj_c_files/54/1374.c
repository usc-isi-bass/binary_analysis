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
	void apple(int ,int );  //:????
	int n,k;
	cin>>n>>k;
	apple(n,k);  //:????
	return 0;
}

void apple (int n,int k)
{
	int a[100],i;
	for (a[n]=n+k;;a[n]=a[n]+n)  //:?a[n]??
	{
		for ( i=n-1;i>0 && a[i+1]%(n-1)==0;i--)  //:??????????????,????
		{
			a[i]=(a[i+1]*n)/(n-1)+k;
		}
        if (i==0)
		{
			cout<<a[1]<<endl;
			break;
		}
	}
}


