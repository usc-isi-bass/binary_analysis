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

/* ???? ????.cpp
 * ??? 1200012826 ??
 * ??? 2012?11?18?
 */
int main()
{
	char a[500], b[500];
	int i, j, k, m, p, l;
	cin >> a;
	l=strlen(a);
	for(i=1; i < l; i++)
		for(j=0; j < l-1; j++)
		{
			p=1;
			m=i;
			for(k=0; k <= i; k++)
			{
				b[k]=a[j+k];
			}
			for(k=0; k <= m; k++)
			{
				if(b[k] == b[m-k])
				{
					continue;
				}
				else
				{
					p=0;
					break;
				}
			}
			if(p)
			{
				for(k=0; k <= m; k++)
				{
					cout << b[k];
				}
				cout << endl;
			}
		}
	return 0;
}