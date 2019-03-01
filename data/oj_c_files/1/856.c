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

int divide(int n,int min)//?n?????????????min
{
	int i,method=0;//method??n????
	if(n>=min)
		method++;
	for(i=min;i<n;i++)
	{
		if(!(n%i))
			method+=divide(n/i,i);
	}
	return method;
}
int main()
{
	int number=0,integer;//??????,integer??????
	int i;
	cin>>number;
	for(i=0;i<number;i++)
	{
		cin>>integer;
		cout<<divide(integer,2)<<endl;
	}
	return 0;
}