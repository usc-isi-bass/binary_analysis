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

void f(char , char , char *,int *);
int main()
{
	char a[100], b, g;
	int la, sum[100] = {0};
	cin >> a;
	la = strlen(a);
	b = a[0];
	g = a[la - 1];
    f(b, g, a, sum );
	return 0;
}
void f(char b, char g, char * a, int * sum)
{
	int i, j, l;
	l = strlen(a);
	for (i = 0; i < l ; i++)
	{
		if ((l > 2) && ( a[i] == g) && (sum[i] == 0))
		{
			for (j = i; j >= 0; j--)
			{	
				if ((sum [j] == 0) && (a[j] == b))
                {
					cout << j << " " << i << endl;
			        sum [i] = 1;
			        sum [j] = 1;
			        f(b, g, a, sum);
				}
			}
		}
	}
}