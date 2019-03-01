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
	int n;
	cin>>n;
	int a[30];
	int i;
	for(i=n-1;i>=0;i--)
		cin>>a[i];
   
	int b[30];
	for(i=0;i<30;i++)
		b[i]=1;
	for(i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]<=a[i]&&b[i]<b[j]+1)
			{

				b[i]=b[j]+1;
				
			}
		}
	}
	int max=1;
	for(i=0;i<n;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
	cout<<max<<endl;

	return 0;
}