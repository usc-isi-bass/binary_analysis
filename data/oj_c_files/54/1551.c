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
	int  n,k;
	cin >> n >> k;
	double t1;
	int t2;
	int b=0;
	for(int i = 1; ; i++)
	{
		t1 = i;
		b = 0;
		for(int j = 1;j<= n ; j++)
		{
			t1 = n * t1 / (n-1) + k;
			t2 = floor(t1);
			//cout <<t1 << "  " << t2 << endl;
			if(t1 != t2)
				break;
			else 
				b++;

		}
		if ( b == n )
		{
			cout << t2 << endl;
		    return 0;
		}
	}

}