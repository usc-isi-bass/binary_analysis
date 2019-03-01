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
	char a[200];
	int times[100]={0};//?????????????
	int start[100]={0};//?????????????
	int sum=0;
	int i;
	cin>>a;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-32;
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==a[i+1])
		{
			times[sum]++;
		}
		else
		{
			times[sum]++;
			sum++;
			start[sum]=i+1;
		}
	}
	for(i=0;i<sum;i++)
		cout<<'('<<a[start[i]]<<','<<times[i]<<')';
	return 0;
}