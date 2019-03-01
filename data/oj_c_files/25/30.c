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
	int n, i, pos;
	const int MAX = 200;
	unsigned an[MAX]={0};
	an[0] = 1;
	cin >> n;
	if(n==0)
		cout << an[0];
	else
	{
		while(n--)
		{
			for(i=0;i<MAX;i++)
				an[i] = an[i] * 2;
			for(i=0;i<MAX;i++)
				if(an[i]>9)
				{
					an[i+1]+=an[i]/10;
					an[i] = an[i] % 10 ;
				}
		}
		for(i=MAX-1;an[i]==0;i--);	
		for(;i>=0;i--)
			cout << an[i] ;
	}
	return 0;
	
}