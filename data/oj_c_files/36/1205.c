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
	int c[128], i;
	char str1[N], str2[N];
	memset(c, 0, sizeof(c));
	cin >> str1;
	int len1 = strlen(str1);
	for(i = 0; i < len1; i++)
		c[str1[i]]++;
	cin >> str2;
	int len2 = strlen(str2);
	for(i = 0; i < len2; i++)
		c[str2[i]]--;
	for(i = 0; i < 128; i++)
		if(c[i] != 0)
		{
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
	return 0;
}