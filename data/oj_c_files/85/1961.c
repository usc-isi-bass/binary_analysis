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
	int num;
	char a[22];
	cin >> num;
	for(int i = 0; i < num; i ++)
	{
		cin >> a;
		//cout << a << " ";
		int n;
		n = strlen(a);
		//cout << n << " ";
		int j;
		for(j = 0; j < n; j ++)
		{
			if( a[0] >= '0' && a[0] <= '9' )
			{
				cout << "no" << endl;
				break;
			}
			if( a[j] >= 'a' && a[j] <= 'z' || a[j] >= 'A' && a[j] <= 'Z' || a[j] >= '0' && a[j] <= '9' || a[j] == '_')
				continue;
			else
			{
				cout << "no" << endl;
				break;
			}
		}
		//cout << "j =" <<j <<"";
		if ( j == n  )
			cout << "yes" << endl;
	}
	return 0;

}