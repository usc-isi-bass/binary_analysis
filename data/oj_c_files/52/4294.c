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
	int num[100],m,n,i,j,t;
	cin >>n>>m;
	for (i=0;i<n;i++)
	{
		cin >>num[i];
	}
	for(j=0;j<m;j++)
	{
	
		t=num[n-1];

		for (i=n-1;i>0;i--)
	
		{
		
			num[i]=num[i-1];
	
		}
		num[0]=t;
	}
	for(i=0;i<n-1;i++)
	{
		cout <<num[i]<<" ";
	}
	cout <<num[n-1]<<endl;
	return 0;
}


