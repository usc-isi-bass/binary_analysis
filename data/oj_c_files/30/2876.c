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
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		if (i%7==0||(i>=70&&i<=79)||(i%10==7))
		{
		} 
		else
		{
			sum = sum + i * i;
		}
	}
	cout<<sum<<endl;
	return 0;
}