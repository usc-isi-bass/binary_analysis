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

//*********************************
//*??????????           *
//*??????                   *
//*???1200012775               *
//*???2012/12/04               *
//*????????               *
//*????????               *
//*********************************
int main()
{
	char a[200], b[200], *p = a, *q = b, *s = NULL;	
	do	//???????
	{
		cin.get(*p);
	} while (*p++ != '\n');
	p = a;	//??????
	while (*(p + 1) != '\n')
	{
		*q = *p + *(p + 1);
		p++;q++;
	}	//???????????
	*q = *p + *a;	//??????????????????
	for (s = b; s <= q; s++)
		cout << *s;	//?????
	cout << endl;
	return 0;
}