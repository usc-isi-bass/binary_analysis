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
	int a[5][5] = {0};
	int i, j, k;
	int found = 0;
	for (i = 0; i < 5; i ++)
		for (j = 0; j < 5; j ++)
			cin >> a[i][j];
	for (i = 0; i < 5; i ++)
	{
		int max = 0, min = 1e6,  mi, mj;
		for (j = 0; j < 5; j ++)
			if (max < a[i][j])
			{max = a[i][j]; mj = j;}
		for (k = 0; k < 5; k ++)
			if (min > a[k][mj])
			{min = a[k][mj]; mi = k;}
		if (mi == i)
		{
			found = 1;
			cout << mi + 1 << " " << mj + 1 << " " << a[mi][mj];
		}
	}
	if (!found)  cout << "not found";
	cout << endl;
	return 0;
	
}