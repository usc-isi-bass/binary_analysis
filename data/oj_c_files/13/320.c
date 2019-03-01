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

//*???????????
//*??????
//*?????2010?10?
//*????????????

int main()
{
	int a, n, i;
	int f[20001] = {0};                //?0
	cin >> n;
	for(i = 1; i <= n; i++)
	{   
		cin >> a;
		if(f[a] == 0)                  //??0?????????????
		{
			if(i == 1)
			   cout << a;
		    else
			   cout << " " << a;
			f[a] = 1;                  //a???????1
		}
	}
	return 0;
}