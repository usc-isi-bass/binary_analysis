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

//********************************************************
//*  ???1000012846_2.cpp  *****************************
//*  ??:??  ******************************************
//*  ?????2010?12?  *******************************
//*  ???????????????  *********************
//********************************************************
int main()
{
	int n,p,q,a[100][100],i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int total=0;
		cin>>p>>q;
		for(j=0;j<p;j++)
			for(k=0;k<q;k++)
				cin>>a[j][k];
		for(int h=0;h<q;h++)
		{
			total+=*(*a+h);
			total+=*(*(a+p-1)+h);
		}
		for(int g=0;g<p;g++)
		{
			total+=**(a+g);
			total+=*(*(a+g)+q-1);
		}
		total-=**a;
		total-=*(*a+q-1);
		total-=**(a+p-1);
		total-=*(*(a+p-1)+q-1);
		cout<<total<<endl;
	}
		return 0;
}
	