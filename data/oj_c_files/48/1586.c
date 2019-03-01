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
	int m, n;
	int bac[9][9] = {{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0}};
	scanf("%d %d",&m,&n);
	int i = 1;
	bac[4][4] = m;
	int p = 0,q = 0;
	while(i<=n)
	{
		q = 0;
		int a[9][9] = {{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0}};
		while(q<9)
		{
			p = 0;
			while(p<9)
			{
				if(bac[p][q]!=0)
				{
					a[p][q] = a[p][q] + 2 * bac[p][q];
					a[p-1][q] += bac[p][q];
					a[p+1][q] += bac[p][q];
					a[p][q-1] += bac[p][q];
					a[p][q+1] += bac[p][q];
					a[p-1][q-1] += bac[p][q];
					a[p-1][q+1] += bac[p][q];
					a[p+1][q-1] += bac[p][q];
					a[p+1][q+1] += bac[p][q];
				}
				p++;
			}
			q++;
		}
		p = 0;
		q = 0;
		while(q<9)
		{
			p = 0;
			while(p<9)
			{
				bac[p][q] = a[p][q];
				p++;
			}
			q++;
		}
		i++;
	}
	p = 0;
	q = 0;
	while(q<9)
	{
		p = 0;
		while(p<8)
		{
			printf("%d ",bac[p][q]);
			p++;
		}
		printf("%d\n",bac[p][q]);
		q++;
	}
	return 0;
}