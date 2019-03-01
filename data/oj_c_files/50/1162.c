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
	int w,i,j,n,a[12][2];
	cin>>w;
	a[0][0]=w;
	for (i=0;i<12;i++)
	{
		if (i==0 || i==2 || i==4 || i==6 || i==7 || i==9 || i==11) n=31;
		else if (i==1 ) n=28;
		     else n=30;
		a[i][1]=a[i][0]+12;
		a[i+1][0]=a[i][0]+n;
		if (a[i][1] % 7==5) 
			cout<<i+1<<endl;
	}
	return 0;
}