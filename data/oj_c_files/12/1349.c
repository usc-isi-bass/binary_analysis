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
	int a[20];
	int flag;
	
	
	cin >> flag;
	
	while(flag != -1)
	{
		a[0] = flag;
		int i = 0;
		int count = 0;
		
		while(a[i] != 0)
		{
			i ++;
			cin >> a[i];
		}
		
		for(int j = 0; j < i; j ++)
		{
			for(int k = 0; k < i; k ++)
			{
				if(a[j] == 2 * a[k])
				count ++;
			}
		}
		
		cout << count << endl;
		
		cin >> flag;
	}
	
	return 0;
}