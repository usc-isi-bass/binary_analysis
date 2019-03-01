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
	int i, a[16];
	while(1)
	{
		for( i = 0;;i++)
		{
			cin >> a[i];
			if(a[i] == 0) 
				break;
			if(a[i] == -1)
				goto end;
		}
		int count = 0;
		for(int m = 0; m < i; m++)
		{
			for(int n = 0; n < i; n++)
			{
				if(a[m] == a[n] * 2)
					count++;
			}
		}
		cout << count << endl;
	} 
	end:
	return 0;
}
