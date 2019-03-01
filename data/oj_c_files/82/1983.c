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

//********************************
//*??????? **
//*?????1300062805 **
//*???2013.10.27 **
//********************************
int main()
{
	int n, i, j, a, b,m=0;
	cin >> n;
	for ( i = 1; i <=n;)
	{
		j = 0;
		while (cin >> a >> b)
		{
			i++;
			
		if ((a>=90)&&(140>=a)&&(b>=60)&&(90>=b))
		{
			j++;
		}
		else
		{
			break;
		}
		if ( j > m)
			m=j;
		}
	}
	cout << m << endl;
	return 0;
}
