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
	int n,i;
	cin>>n;
	int x[n+1];
	for(i=n;i>=1;i--)
	cin>>x[i];
	for(i=1;i<n+1;i++)
	{
		if(i==1)
		cout<<x[i];
		else
		cout<<" "<<x[i];
	}
	return 0;
}