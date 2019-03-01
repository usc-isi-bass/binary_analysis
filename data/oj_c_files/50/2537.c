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
	int w,temp,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i,j;
	cin>>w;
	for(i=1;i<=12;i++)
	{
		temp=0;
		for(j=1;j<i;j++)
		{
			temp+=a[j];
		}
		temp+=12;
		temp=(temp+w)%7;
		if(temp==5)
			cout<<i<<endl;
	}

	return 0;
}
