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
	int a[6], b[6];

	for (a[1] = 1;a[1] <= 5; a[1]++)
	{
	for (a[2] = 1;a[2] <= 5; a[2]++)
	{
		for (a[3] = 1;a[3] <= 5; a[3]++)
		{
			for (a[4] = 1;a[4] <= 5; a[4]++)
			{
		for (a[5] = 1;a[5] <= 5; a[5]++)
		{
			for (int i = 1; i<=5;i++)
			{
			b[i] = (a[i]==1||a[i]==2);
			}
			if(a[5] == 2||a[5] == 3)
				continue;
			if (a[1] == a[2]||a[1] == a[3]||a[1] == a[4]||a[1] == a[5]||a[2] == a[3]||a[2] == a[4]||a[2] == a[5]||a[3] == a[4]||a[3] == a[5]||a[4] == a[5])
				continue;
			if ((b[1] - (a[5]==1))==0&&(b[2] - (a[2]==2))==0&&(b[3] - (a[1]==5))==0&&(b[4] - (a[3]!=1))==0&&(b[5] - (a[4]==1))==0)
				cout << a[1] <<" " << a[2] <<" " << a[3] <<" " << a[4] <<" " << a[5] << endl; 
			}
			}
		}
	}
	}

	return 0;
}