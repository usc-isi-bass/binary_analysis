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
	int iCase,n,i,count,a[20];
	cin>>iCase;
	while(iCase--)
	{
		count=60;
		cin>>n;
		for(i=0;i<n;i++) 
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]+3*i>60) break;
			if(a[i]+3*(i+1)<=60) count-=3;
			if(a[i]+3*(i+1)>60) count=a[i];
		}
		cout<<count<<endl;
	}
	return 0;
}
