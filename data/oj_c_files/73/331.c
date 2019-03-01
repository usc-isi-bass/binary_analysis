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
	int a[5][5],max[5],y[5];
	int e=0;
	int is=1;
	for(int i=0;i<5;i++)
	{
		max[i]=0;
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
			if(max[i]<=a[i][j]){max[i]=a[i][j];y[i]=j;}
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(max[i]>a[j][y[i]])is=0;
		}
		if(is)
		{
			e=1;
			cout<<i+1<<' '<<y[i]+1<<' '<<max[i];
		}
		is=1;
	}
	if(e==0) cout<<"not found";
    return 0;
}