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
	int a[101],n=0;     //a[101]?????????
	char s[101];
	cin >> s;
	for (int i = 0; s[i]; ++i)   //??????
	{
		if (s[i] == s[0])        //?????????
			a[++n] = i;
		else                     //?????????????????????????????
			cout << a[n--] << " " << i << endl;
	}
	return 0;
}