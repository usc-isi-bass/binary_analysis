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
	int a[25];
	int rem[25] = {1};
	for(int i = 0; i < n; i++)
		cin>>a[i];
	int MMax = 0;
	for(int i = 1; i < n; i++)
	{
		int max = 0;
		for(int j = i-1; j >= 0; j--)
		{
			if(j < max) break;
			if(a[j] >= a[i] && rem[j] > max) max = rem[j];
		}
		rem[i] = max + 1;
		if(rem[i] > MMax) MMax = rem[i];
	}
	cout<<MMax<<endl;
	return 0;
}