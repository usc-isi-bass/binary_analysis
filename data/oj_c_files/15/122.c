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


void main()
{
	int a, b, s, i, j;
	int x[100][100];

	int n;
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
		    scanf("%d", &x[i][j]);
		}
	}  
	for(i=0; i<n; i++)
	{
		a = 0;
		for(j=0; j<n; j++)
		{
			if(x[i][j] == 255)
				continue;
			if(x[i][j] == 0)
				a = a+1;
		}
		if(a > 0)
			break;
	}
    for(j=0; j<n; j++)
	{
		b = 0;
		for(i=0; i<n; i++)
		{
			if(x[i][j] == 255)
				continue;
			if(x[i][j] == 0)
				b = b+1;
		}
		if(b > 0)
			break;
	}
	s = (a - 2)*(b - 2);
	printf("%d", s);
}