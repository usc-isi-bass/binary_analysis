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
	int n, t;
	cin >> n;
	for(t = 0;t < n;t++)
	{
		int m;
		cin >> m;
		int f(int a,int min);
		cout << f(m, 2) << endl;
	}
    return 0;
}
int f(int a, int min)
{
	int i = min;
	if(a < min)
	{ 
		return 0; 
	} 
	int result = 1; 
	while(i < a)
	{ 
		if(a % i == 0)
		{ 
			result += f(a / i,i); 
		}
		i++;
	}
	return result; 
} 
