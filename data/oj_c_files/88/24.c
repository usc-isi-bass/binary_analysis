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

/*???:????
**???:??
**?  ?:2010?12?10?
*/
int main()
{
	char str[31], *p, *q;
	int sum;//?????????
	cin.getline(str, 31);
	for (q = str; *q != '\0'; q++)//??
	{
		sum = 0;
		if (*q >= '0' && *q <= '9')//????
		{
			sum += *q - '0';
			for (p = q + 1; *p <= '9' && *p >= '0'; p++)//?????,???????????'\0'
				sum = sum * 10 + *p - '0';//????
			cout << sum << endl;//??,??p???????
			if (*p == '\0')
				break;//?????,???
			q = p;//??????????,????????????????			
		}
	}
	return 0;
}