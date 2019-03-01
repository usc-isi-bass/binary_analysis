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

//******************************
//*????4.??????
//*??????
//*???2012-12-8
//******************************

int main()
{
	int i, l;
	char str1[1000], str2[1000], *m = str1, *n = str2;   // ???????????????
	cin.getline(str1, 1000);
	l = strlen(str1);                              //?????
	for(i = 0; i < l - 1; i++)
	{
		*n++ = *m + *++m;
	}
	*n = str1[0] + *m;                           // ?????????????????
	*++n = '\0';
	cout << str2;                           //????????

return 0;
}

