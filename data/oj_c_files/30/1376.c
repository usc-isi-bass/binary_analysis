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
	int n, sum = 0, i;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		if(i % 7 == 0 )
		
		continue;
	
		else
			if(i % 10 == 7)
				
			continue;
			
			else 
				if(i / 10 == 7)
			
				continue;
			
		sum = sum +i*i;
	}
	cout << sum << endl;
	return 0;
}
