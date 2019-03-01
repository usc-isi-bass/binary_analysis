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
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},day[13];
    int w,i;
	cin>>w;
	w=(w+12)%7;
	day[1]=w;
	if(w==5)
		cout<<1<<endl;
	for(i=2;i<=12;i++)
	{
        day[i]=(day[i-1]+a[i-1])%7;
		if(day[i]==5)
			cout<<i<<endl;
	}
	return 0;
}
