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
	int sum,i,n[6],rest[7],
		price[6]={100,50,20,10,5,1};
	cin>>sum;
	rest[0]=sum;
	for(i=0;i<6;i++)
	{
		n[i]=rest[i]/price[i];
		rest[i+1]=rest[i]%price[i];
		cout<<n[i]<<endl;
	}
    return 0;
}