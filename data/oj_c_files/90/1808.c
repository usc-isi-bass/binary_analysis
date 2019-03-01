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

//?????



//???? ??????????
int placeMethodCounts(int m, int n)
{

	//??????, ?????????????????????????
	if(m == 0 || n == 1)
		return 1;

	if (m >= n)//???????? 
		return placeMethodCounts(m - n, n) + placeMethodCounts(m, n - 1);
	else  //?????????????????????? 
		return placeMethodCounts(m, m);
}

int main()
{
	int t,i;
	int m[MAX_T], n[MAX_T];

	scanf("%d", &t);

	for (i = 0; i < t; i++)
		scanf("%d %d", &m[i], &n[i]);

	for (i = 0; i < t; i++)
		printf("%d\n", placeMethodCounts(m[i], n[i]));

	return 0;
}