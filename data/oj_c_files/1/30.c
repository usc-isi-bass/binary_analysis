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

int main(){
	int number(int n, int low);
	int n, i, data, ans;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		scanf("%d", &data);
		ans = number(data, 2);
		printf("%d\n", ans);
	}
}
int number(int n, int low)
{
	int j, ans;
	ans = 0;
	for (j = low ; j * j<= n; j++)
	{
		if (n % j == 0) 
			ans = ans + number(n / j, j);
	}
	ans = ans + 1;
	return ans;
}