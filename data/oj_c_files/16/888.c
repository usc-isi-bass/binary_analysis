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
    int n=0,m=0,i=0;
    cin>>n;
	if(n==0)
	   cout<<0;
	else
	{
		int a[5];
	a[0]=n/10000;
	a[1]=(n-10000*a[0])/1000;
	a[2]=(n-10000*a[0]-1000*a[1])/100;
	a[3]=(n-10000*a[0]-1000*a[1]-100*a[2])/10;
	a[4]=n-10000*a[0]-1000*a[1]-100*a[2]-10*a[3];
	for(i=0;i<=4;i++)
	{
		if(a[i]!=0)
		{
			m=i;
			break;
		}
	}
	for(i=4;i>=m;i--)
	{
		cout<<a[i];
	}
	}
	

	
    return 0;
} 