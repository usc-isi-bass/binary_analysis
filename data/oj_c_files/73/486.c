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


//*****************************
//*??? :????           *
//*??   :???             *
//*??   :2011?10?         *
//*****************************
int main ()
{
	int a[5][5],i=0,j=0,max[5]={0},flag=1;
	int q[5]={0},min[5]={1000000,1000000,1000000,1000000,1000000};
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin >> a[i][j];
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max[i])
			{
				max[i]=a[i][j];
				q[i]=j;
			}
		}
	}
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			if(a[i][j]<min[j])
			{
				min[j]=a[i][j];
			}
		}
	}
    for(i=0;i<5;i++)
	{
			if(max[i]==min[q[i]])
			{
			cout << i+1 << " " << q[i]+1 << " " << max[i];
			flag=0;
			}
	}
	
	if(flag==1) cout << "not found";
	return 0;
}
	
			
