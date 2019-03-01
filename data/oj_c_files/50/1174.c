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
	int w,i,x=12,k[12][1]={0},j;
	cin>>w;
	int m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<12;i++)
	{
		x=x+m[i];
		j=x%7;
		if(w+j==5||w+j-7==5)
			k[i][0]=1;
	}
	for(i=0;i<12;i++)
	{
		if(k[i][0]!=0)
			cout<<i+1<<endl;
	}
	return 0;
}



