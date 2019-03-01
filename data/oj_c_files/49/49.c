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

//****************************************************** 
//* ? ? ?   ?? ? ? ?                           *
//* ? ?      ?? ? ?                              *
//* ? ? ? ??2010 ? 11 ? 24 ?                   * 
//* ? ?      ?1000010185                            *
//****************************************************** 
char a[501]; //??a??????
int Judge(int b, int e) //????Judge??a????b???e???????
{
	int k = (b + e - 1) / 2;
	int i;
	for (i = b; i <= k; i ++)
		if (a[i] != a[b + e - i])
			break;
	if (i == k + 1)
		return 1;
	else
		return 0;
}

int main()
{
	int l;
	cin >> a;
	l = strlen(a);
	for (int i = 2; i <= l; i ++) //?????2?l??
		for (int j = 0; j <= l - i; j ++) //?????????????
			if(Judge(j, j + i - 1))
			{
				for (int k = j; k < i + j; k ++)
					cout << a[k];
				cout << endl;
			}
	return 0;
}