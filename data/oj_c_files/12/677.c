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
	int a[18] = {0},i,n,ii,s;
	char c;
	while (1)
	{	
		i = 1;
		while (1)
		{
			cin>>a[i];
			if ((a[i] == 0)||(a[i] == -1))
				break;
			i++;
		}
        if (a[i] == -1)
			break;
		n = i;
		i = 1;
		s = 0;
		while (i < n)
		{
			ii = 1;
			while (ii < n)
			{
				if (a[ii] == 2 * a[i])
					s++;
				ii++;
			}
			i++;
		}
		cout<<s<<endl;
	}
	return 0;
}