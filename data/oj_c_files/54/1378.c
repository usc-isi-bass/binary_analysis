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
	int n,k;
	cin>>n>>k;
	int apple[n+1];
	for(int j=1;j<=100000000;j++)
	{
		apple[n]=j*n+k;
		int i;
		for(i=n;i>=2;i--)
		{
			if(apple[i]%(n-1)==0)
			    apple[i-1]=apple[i]*n/(n-1)+k;
			else
				break;
		}
		if(i==1) break;
	}
	cout<<apple[1]<<endl;
	return 0;
}