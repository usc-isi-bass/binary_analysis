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
    int n,i,num,counter=0,j;
	int a[500];
	cin>>n;
	for(i=1,counter=0;i<=n;i++,counter++)
	{
		cin>>num;
		if(num%2!=0)
			a[counter]=num;
		else
			counter--;
	}
    for(i=1;i<counter;i++)
	{
		for(j=counter-1;j>=i;j--)
		{
			if(a[j]<a[j-1])
			{
				num=a[j];
				a[j]=a[j-1];
				a[j-1]=num;
			}
		}
	}
    for(i=0;i<counter;i++)
	{
		if(i==0)
			cout<<a[i];
		else
			cout<<","<<a[i];
	}
	return 0;
}