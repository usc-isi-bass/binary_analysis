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

char a[100], p, q;

void solve()
{
	int i=0, b, g;
	while(a[i] != '\0')
	{
		if(a[i] == p)
			b = i;
		else if (a[i] == q)
		{
			g = i; 
			a[b] = '0';
			a[g] = '0';
			cout << b << ' ' << g << endl;
			solve();
			break;
		}
		i++;
	}
	return;
}
		
	
int main()
{
	
	cin.get(a,100);
	p = a[0];
	int i=0;
	while(1)
	{
		if(a[i] != p)
		{
			q = a[i];
			break;
		}
		i++;
	}
	solve();

	return 0;
}
		
