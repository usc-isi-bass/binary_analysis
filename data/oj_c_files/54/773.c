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

int abc(int c,int d,int e)
{
	c=c*d/(d-1)+e;
	return c;
}
void Sum(int a,int b)
{
	int m=1,i=1,j=0;
	while (j != a)
		{
			m=i;
			for (j=0;j<a;j++)
				if (m%(a-1) == 0)
					m=abc(m,a,b);
				else
					{
						i++;
						break;
					}
		}
	cout << m << endl;
}

int main()
{
	int n,k;
	cin >> n >> k;
	Sum (n,k);
	return 0;
}
