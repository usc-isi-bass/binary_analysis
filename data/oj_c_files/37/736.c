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

/***************************************
 *
 *  ???????????????
 *  ???1100017637 ???
 *  ???2011.11.7
 *
 ***************************************/



int main()
{
	int t, i, j, k, s, l, flag = 0;
	char a[100000];

	// ???????????
	cin >> t;
	for (i = 0; i < t; i++)
	{
		// ?????
		s = 0; k = 0; j = 0, l = 0; flag = 0; 

		// ????b[]?26????c[]???????????
		int c[26] = {0};
		char b[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
		
		// ?????
		cin >> a;
		
		// ????????a[]???b[]??????
		// ??c[]????????
		for (k = 0; a[k] != '\0' ; k++)
		{
			for (s = 0; s < 27; s++)
			{	
				if (a[k] == b[s])
					c[s]++;
			}
		}

		// ????c[],?c[]??1???0??b[]
		for (j = 0; j < 27; j++)
		{
			if (c[j] != 1)
			{
				b[j] = 0;
			}
		}
	
		// ???a[]?b[],?a[]b[]?????????a[]
		for (l = 0; a[l] != '\0'; l++)
		{
			for (j = 0; j < 27; j++)
			{
				if (flag == 0)
				{
					if (a[l] == b[j])
					{
						cout << a[l] << endl;
						flag = 1;
						break;
					}
				}
			}
		}

		// ?????????no
		if (flag == 0)
			cout << "no" << endl;
	}

	return 0;
}