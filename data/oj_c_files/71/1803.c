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


int MM[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void YY(int x)
{
	if(x % 400 == 0 || (x % 4 == 0 && x % 100 != 0))
	{
		MM[2] = 29;
		return;
	}
	MM[2] = 28;
}

int main()
{
	int n, yy, m1, m2, i, s;
	cin >> n;
	while(n--)
	{
		cin >> yy >> m1 >> m2;
		s = 0;
		YY(yy);
		if(m1 > m2)
		{
			m1 = m1 ^ m2;
			m2 = m1 ^ m2;
			m1 = m1 ^ m2;
		}
		for(i = m1;i < m2;i++)
			s += MM[i];
		if(s % 7 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
