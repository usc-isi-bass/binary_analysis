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

char str[500];
int n, len;
int num(char*);

int main()
{
	char  *p = NULL, *s = NULL;
	int i = 0, sum[500], max = 1, j, k = 0;
	cin >> n;
	cin >> str;
	len = strlen(str);
	p = str;
	while(p <= &str[len - n])
	{
		sum[i] = num(p);
		p++;
		i++;
	}
	for(i = 0; i <= len - n - 1; i++)
	{
		if(sum[i] > max)
		{
			max = sum[i];
		}
	}
	if(max == 1)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << max << endl;
	for(i = 0; i <= len - n; i++)
		if(sum[i] == max)
		{
			s = &str[i];
			for(j = 1; j <= n; j++, s++)
				cout << *s;
			cout << endl;
		}
	return 0;
}

int num(char *q)
{
	char *h = q + 1, *c = q, *u;
	int m, t = 0, r = 1;
	if(q >= &str[len - n])
		return 1;
	while(h != &str[len - n + 1])            
	{
		u = h;
		for(m = 1; m <= n; m++)
		{
			if(*q != *h)
				break;
			else
			{
				t++;
				h++;
				q++;
			}
		}
		if(t == n)
		{
			r++;
		}
		t = 0;
		q = c;
		h = u + 1;
	}
	return r;
}