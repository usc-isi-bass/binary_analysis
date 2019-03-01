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

//???????????
//?????? 1000012918
//???10.28
//???
int main()
{
	int n, count[101] = {0}, num;            //count[num]???num????????????0
	cin >> n;
	for (int i = 1; i <= n; i ++)
	{
		cin >> num;  
		if (count[num] == 0)                     //?????????
			if (i == 1)
				cout << num;
			else
			cout << " " << num;
			count[num]++;                       //?????????1
	}
	return 0;
}