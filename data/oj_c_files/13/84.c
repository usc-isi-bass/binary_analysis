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
	int n,i,j;
	cin>>n;
	int num[20000];
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	cout<<num[0];
	for(i=1;i<n;i++)
	{
		int sum=0;
		for(j=0;j<i;j++)
		{
			if(num[i]!=num[j])
			{
				continue;
			}
			else sum++;
		}
		if(sum==0) cout<<' '<<num[i];
	}
	return 0;
}