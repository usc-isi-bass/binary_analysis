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

//***************************************************
//1.cpp ??     ******
//?? ???  1200018209  ********
//?? 2012-10-29 ******
//***************************************************
int main()
{
	int a[100],j,k,l,sum=0;
	for(;;)
	{
		for(j=0;;j++)
		{
			cin >> a[j];
			if(a[j]==0||a[j]==-1)break;
		}
		if(a[0]==-1)break;
		for(k=0;k<j-1;k++)
		{
			for(l=k+1;l<=j-1;l++)
			{
				if(a[k]==2*a[l]||a[l]==2*a[k])
				{
					sum++;
				}
			}
		}
		cout << sum << endl;
		sum=0;
	}
	return 0;
}