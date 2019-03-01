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
	char a[1000]={'\0'};
	cin>>a;
	int i=0;
	while (a[i]!='\0')
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-32;
		i++;
	}
	i=1;
	int times=1;
	while (a[i]!='\0')
	{
		if (a[i]==a[i-1])
		times++;
		else 
		{
			cout<<'('<<a[i-1]<<','<<times<<')';
			times=1;
		}
		i++;
	}
	cout<<'('<<a[i-1]<<','<<times<<')';
	return 0;
}