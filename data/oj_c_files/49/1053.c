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
	int l;
	char p[505];
	int b, w;
	int i;
	int flag;

	cin >> p;

	l = strlen(p);

	for(w = 2; w <= l; w ++)
		for(b = 0; b <= l - w; b ++)
		{
			flag = 1;

			for(i = 0; i < w / 2 + 1 ; i++)
			{ 
				if(p[b + i] != p[b + w - 1 - i])
				{
					flag = 0;
					break;
				}
			}

			if(flag == 1)
			{
				for(i = b; i < b + w; i ++)
					cout << p[i];

				cout << endl;
			}
		}

		return 0;
}


