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
	int know[10000]={0};
	cin>>n;
	for (i=0;i<n;i++)
		know[i]=0;
	while (cin>>i>>j)
	{
		if (i==j&&i==0)
			break;
		know[i]=-1;
		if (know[j]!=-1)
		{
			know[j]++;
			if (know[j]==n-1)
				cout<<j<<endl;
		}
	}
	return 0;
}