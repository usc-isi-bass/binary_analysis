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
	int k;
	cin>>k;
	int h[50];
	int i,j;
	for(i=0;i<k;i++) cin>>h[i];
	int num[50],max;
	num[0]=1;
	for(i=1;i<k;i++)
	{
		max=0;
		for(j=0;j<i;j++)
		{
			if(h[j]>=h[i]&&num[j]>max) max=num[j];
		}
		num[i]=max+1;
	}
	max=0;
	for(i=1;i<k;i++)
	{
		if(num[i]>max) max=num[i];
	}
	cout<<max<<endl;
	return 0;
}