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
	int i, j, n, k = 0, sum = 0, len = 0;
	int flag[100];
	char word[1000][41];
	cin >> n;
	for(i = 0; i < n; i ++)
		cin >> word[i];
	flag[0] = 0;
	for(i = 0; i < n; i ++)
	{
		len = strlen(*(word + i));
		sum += len;
		if(sum + i - flag[k] > 80)
		{
			flag[++ k] = i;
			i --;
			sum = 0;
		}
	}
	flag[k + 1] = n;
	for(i = 0; i <= k; i ++)
	{
		for(j = flag[i]; j < flag[i + 1] - 1; j ++)
		{
			cout << *(word + j) << " ";
		}
		cout << *(word + flag[i + 1] - 1) << endl;
	}
	return 0;
}
	