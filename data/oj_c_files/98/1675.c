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

//***********************************************
//*3�D�?o&#206;&#196;�&#214;&#197;&#197;�&#230;                               *
//*D&#213;&#195;&#251;?oo&#206;&#212;&#198;&#198;e                                 *
//*&#209;�o&#197;?o1300012888                             *
//*�&#213;&#198;�?o2013.12.18                             *
//***********************************************

int main()
{
	int n, i, num[1000], *p = num, sum = 0;
	char word[1000][40];
	cin >> n;

	for(i = 0;i <= n - 1;i ++)
	{
		cin >> word[i];
		*(p + i) = strlen(word[i]);
	}

	for(i = 0;i <= n - 1;i ++)
	{
		if(sum == 0)
		{
			sum += *(p + i);
			cout << word[i];
		}
		else
		{
			sum += (*(p + i) + 1);
			if(sum <= 80)
				cout << " " << word[i];
			else
			{
				sum = 0;
				i --;
				cout << endl;
			}
		}
	}
	cout << endl;

	return 0;
}