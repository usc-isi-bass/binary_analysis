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
	int a[100][100]={0};
	int hang,lie;
	cin>>hang>>lie;
	int i,j;
	for(i=0;i<hang;i++)
	{
		for(j=0;j<lie;j++)
			cin>>a[i][j];
	}
	int t;
	for(t=0;t<=hang+lie-2;t++)
	{
		for(i=0;i<hang;i++)
		{
			for(j=0;j<lie;j++)
			{
				if(i+j==t)
					cout<<a[i][j]<<endl;
			}
		}
	}
	return 0;
}