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
	int n, m, i, x, y, temp;
	cin>>n;
	while(cin>>m)
	{
		x=1;
		y=1;
		for (i=0;i<m-2;i++)
		{
			x=y+x;
			temp=y;
			y=x;
			x=temp;
		}
	cout<<y<<endl;
	}
	return 0;
}