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
	double a[50][2];
	double b;
	double dis;
	cin>>n;
	cin>>a[0][0]>>a[0][1];
	for(i=1;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
		for(j=0;j<i;j++)
		{
			b=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
			if(b>dis)
				dis=b;

		}
	}
    printf("%.4f\n", dis);
		return 0;
}
	
