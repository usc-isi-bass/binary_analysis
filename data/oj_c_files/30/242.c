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
	int i, sum=0, t;
	cin >> n;
	for (i=1;i<=n;i++)
	{
		if (i%7!=0)
		{
			t = (i+3) % 10;
			if(t!=0)
			{
				if(i>79)
					sum=sum+i*i;
				if(i<70)
					sum=sum+i*i;
			}
		}
	} 
	cout << sum << endl;
	return 0;
}