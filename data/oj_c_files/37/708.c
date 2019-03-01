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

int main ()
{
	
	int t, i, j, g, l;
	char a[100000];
	int count = 0;
	cin >> t;
	for(i = 0;i <= t;i++)
	{
		j = 0;
		
		
		cin.getline(a,100000);
		while(a[j] != '\0')
		{
			l = 0;
			count = 0;
			g = 0;
			while(a[g] != '\0')
			{
				if(a[j] == a[g])
				{
					count++;
				}
				g++;
			}
			
			
			if(count == 1)
			{
				cout << a[j] << endl;
				l = 1;
				break;
			}
			j++;
		}
		if(l == 0)
		{
			cout << "no" << endl;
		}
	}
	return 0;
}