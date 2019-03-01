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

int main ()
{
	char a[1000][41] = {'\0'};                       //???????
	int i = 0, j = 0, n = 0;
	cin >> n;
	for(i = 0; i < n; i ++)
		cin >> *(a+i);                               //????
	int sum = 0;
	for(i = 0; i < n; i ++)
	{
		if(sum == 0)                                 //?????????
		{
			cout << *(a + i);
			sum = sum + strlen(*(a + i));
		}
		else if (sum == 80)                          //??????80???
		{
			cout << endl;
			sum = 0;
			i --;
		}
		else if (sum + strlen(*(a + i))  >= 80)      //?????????????80
		{
			cout << endl ;
			sum = 0;
			i --;
		}
		else                                         //?????
		{
			cout << ' ' << *(a + i);
			sum = sum + strlen(*(a + i)) + 1;
		}
	}

	return 0;
}