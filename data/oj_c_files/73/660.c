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
	int i,j,a[6][6],max[6]={0},min[6]={0,100000,100000,100000,100000,100000},sum=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cin>>a[i][j];
			if(a[i][j]<min[j])
				min[j]=a[i][j];
			if(a[i][j]>max[i])
				max[i]=a[i][j];
		}
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(a[i][j]==max[i]&&a[i][j]==min[j])
			{
				sum++;
				cout<<endl<<i<<" "<<j<<" "<<a[i][j];
			}
		}
	}
	if(sum==0)
		cout<<"not found";
	return 0;
}