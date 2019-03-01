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
	int s[100] = {0}, sum = 0, top = 0;
	char b, a;
	s[0] = 0;
	cin >> b;
	while(top >= 0)
	{
		cin >> a;
		sum++;
		if(a == b)
		{
			s[++top] = sum;
		}
		else
		{
			cout << s[top] << " " << sum<< endl;
			top--;
		}
	}
	return 0;
}