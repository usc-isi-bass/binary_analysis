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
//* ? ? ?   ?? ? ? ? ? ? ?                  *
//* ? ?      ?? ? ?                              *
//* ? ? ? ??2010 ? 12 ? 8 ?                    * 
//* ? ?      ?1000010185                            *
//****************************************************** 
int main()
{
	char a[100];
	cin.getline(a, 100);
	char *p = a; // ??p?????a????
	for (; *p != '\0'; p++) // ??p???????a
		if (*p == ' ' && *(p + 1) == ' ') // ????????
		{
			for (char *q = p + 1; *q != '\0'; q++) // ????????????????????????
				*q = *(q + 1);
			p -= 1; // ???????????
		}
	cout << a;
	return 0;
}