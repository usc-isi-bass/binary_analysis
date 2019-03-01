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

void process(int m)
{
	int m_change;
	if (m == 1)
	{
		cout << "End" << endl;
		return;
	}
	else
		if (m % 2 == 1)
		{
			m_change = m * 3 + 1;
			cout << m << "*" << 3 << "+" << 1 << "=" << m_change << endl;
			process(m_change);
		}
		else
		{
			m_change = m / 2;
			cout << m << "/" << 2 << "=" << m_change << endl;
			process(m_change);
		}
}
int main()
{
	int n;
	cin >> n;
	process(n);

	return 0;
}