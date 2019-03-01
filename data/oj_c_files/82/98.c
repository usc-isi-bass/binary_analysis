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
	int n,arr[100][2],i,j=0,h[100]={0},m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i][0]<=140&&arr[i][0]>=90&&arr[i][1]<=90&&arr[i][1]>=60)
		{
			h[j]=h[j]+1;
		}
		else
		{
			j++;
		}
	}
	m=h[0];
	for(i=1;i<100;i++)
	{
		if(h[i]>m)
		{
			m=h[i];
		}
	}
	cout<<m;
	return 0;
}