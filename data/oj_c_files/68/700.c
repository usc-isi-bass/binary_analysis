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

/*
????5.cpp
??????
???2010.10.23
???????????
*/
int main()
{
	int n, i, j, sqr, k1, k2;
	cin >> n;
	for(i=6;i<=n;i=i+2)					//??6?12???????
	{
		for(k1=3;k1<=i/2;k1=k1+2)		//?k1????????
		{
			sqr = (int) sqrt(k1);
			for(j=2;j<=sqr;j++)
			{
				if(k1 % j == 0) break;
			}
			if(j == sqr + 1)			//?k1?????k2=i-k1???k2
			{
				k2 = i - k1;
				sqr = (int) sqrt(k2);
				for(j=2;j<=sqr;j++)	
				{
					if(k2 % j == 0) break;
				}
				if(j == sqr + 1)		//?k2???????????????
				{
					cout << i << "=" << k1 << "+" << k2 << endl;
					break;
				}
			}
		}
	}
	return 0;
}