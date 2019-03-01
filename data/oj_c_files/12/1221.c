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
	int a[16];//???0????????????
	int num = 0;
	int s;//??2??????
	int i , j;//?????
	cin >> a[num];
	while (a[num] != -1)
	{
		while (a[num] != 0)
		{
			num++;
			cin >> a[num];
		}
		num--;//?????0????
		s = 0;
		for (i = 0; i <= num; i++)
			for (j = 0; j <= num; j++)
				if (a[i] == a[j] * 2)
					s++;
		cout << s << endl;
		num = 0;
		cin >> a[num];
	}

}
