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


int num[30];
int dst[30];

int main()
{
	memset(dst, 0, sizeof(dst));
	int n;
	int ans;
	cin>>n;
	for(int i = 0; i < n ; i++)
	{	
		cin>>num[i];
	}
	dst[0] = 1;
	int temp, max;
	for(int i = 1; i < n; i++)
	{
		max = 1;
		for(int j = 0; j < i; j++)
		{
			
			if(num[i] <= num[j] )
			{
				temp = dst[j] + 1;
				if(max < temp)
					max = temp;
			}
		}
		dst[i] = max;
	}
	max = 0;
	for(int i= 0; i < n; i++)
	{
		//cout<<dst[i]<<" ";
		if(max < dst[i])
			max = dst[i];
	}

	cout<<max;
	return 0;
}
