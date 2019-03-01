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
	int z, q, s, l, i;
	char a[6] = {0};
	for(z = 1; z <= 5; z++)
		for(q = 1; q <= 5; q++)
			for(s = 1; s <= 5; s++)
				for(l = 1; l <= 5; l++)
				{
					if((z + q == s + l)&&(z + l > s + q)&&(z + s < q)
					    && z!= q && z!=s && z!= l && q != s && q != l && s != l)
					{
						a[5-z] = 'z';
						a[5-q] = 'q';
						a[5-s] = 's';
						a[5-l] = 'l';
						for(i = 0; i < 5; i++)
							if(a[i] != 0)
								cout << a[i] << ' ' << (5 - i)*10 << endl;
					}
				}
	return 0;
}
