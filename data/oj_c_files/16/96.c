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

//??????????
int main()
{
	char	num[5];
	cin >> num;
	int	nl = strlen(num);
	
	int	i;
	for (i = 0; i < (int)(nl / 2); i ++)
	{
		char	k;
		k = num[i];
		num[i] = num[nl - 1 - i];
		num[nl - 1 - i] = k;
	}
	
	cout << num;
	cout << endl;


	return 0;
}


