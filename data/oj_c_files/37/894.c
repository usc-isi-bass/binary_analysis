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
	int i,j,k,t; cin>>t;
	char a[t][100000];
	for (i=0;i<t;i++)
		cin>>a[i];
	for (k=0;k<t;k++)
	{
		int length=strlen(a[k]);
		for (i=0;i<length;i++)
			{
			for (j=0;j<length;j++)
				if (a[k][i]==a[k][j]&&i!=j)
					break;
			if (j==length)
				{
				cout<<a[k][i]<<endl;
				break;
				}
			}
		if (i==length)
			cout<<"no"<<endl;
	}
	return 0;
}
