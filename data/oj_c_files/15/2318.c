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
	int x1=0,y1=0,x2=0,y2=0;
	int i=0,j=0;
	int temp;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			cin>>temp;
			if (temp==0) break;
		}
		if (j!=n) break;
	}
	x1=i;
	y1=j;
	for (j++;j<n;j++) cin>>temp;
	for (i++;i<n;i++)
		for (j=0;j<n;j++)
		{
			cin>>temp;
			if (temp==0)
			{
				x2=i;
				y2=j;
			}
		}
	cout<<(x2-x1-1)*(y2-y1-1);
	return 0;
}