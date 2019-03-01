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
	int n, j, i, a, b, s, tot;
	cin >> n;
	j=0;
	s=0;
	tot=0;
	for (i=1;i<=n;i++)
	{
		cin >> a;
		cin >> b;
		if (((a>=90)&&(a<=140))&&((b>=60)&&(b<=90)))
		{
			j++;
		    s=j;
		}
		else 
	{   
		if (j<=tot) 
			j=0;
		else
		{
				tot=j;
				j=0;
		}

			
	}
	}
	if (j>=tot)
		tot=j;

	cout << tot;
}