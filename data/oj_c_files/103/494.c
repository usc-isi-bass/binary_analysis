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


int zimu(char m)
{
	int num = 0;
	if(m <= 'Z' && m >= 'A')
		num = m - 'A' - 1;
	else if(m <= 'z' && m >= 'a')
		num = m - 'a' - 1;
	return num;
}

int main()
{
	int k = 1,i = 1;
	char a[10001],temp;
	cin.getline(a,10001);
	temp = a[0];
	while(a[i] != '\0')
	{
		if(zimu(a[i]) == zimu(temp))
		{
			k++;
		}
		else
		{
			cout << '(' << (char)('A' + 1 + zimu(temp)) << ',' << k << ')';
			k = 1;
			temp = a[i];
		}
		i++;
	}
	if(zimu(a[i - 1]) != zimu(a[i - 2] || k > 1))
		cout << '(' << (char)('A' + 1 + zimu(temp)) << ',' << k << ')';
	return 0;
}
