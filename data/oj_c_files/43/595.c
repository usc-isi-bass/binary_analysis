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
    int m;
    cin >> m;
    int n1, n2, i, j, p1, p2;
    double a, b;
    for(n1 = 3; n1 <= m / 2; n1 += 2)
    {
        n2 = m - n1;
        a = sqrt(n1);
        b = sqrt(n2);
		//cout << a << b <<endl;
        for(i = 2; i <= a; i++)
        {
            if(n1 % i == 0)
				break;
        }
        if(i > a )
        {
            p1 = n1;
        }
        else
        {
            continue;
        }
        for(j = 2; j <= b; j++)
        {
            if(n2 % j == 0)
				break;
        }
		if(j > b )
		{
			p2 = n2;
		}
		else
		{
			continue;
		}
		cout << p1 << " " << p2 << endl;
    }
    return 0;
}