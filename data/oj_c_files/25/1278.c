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

//********************************
//*�y3�?o&#188;&#198;&#203;&#227;2?&#196;N?&#206;�&#189;           **
//*��&#213;&#223;?o�&#245;&#197;&#244;�� 1300013007      **
//*�&#188;&#228;?o2013.11.15             **
//********************************
int main()
{
	int n, i, j, k, l, len;
	int num[110] = {0};
	cin >> n;
	if(n == 0)
		cout << "1";
	else
	{
		num[0] = 1; len = 1;
		for(i = 1; i <= n; i++)
		{
			for(k = 0; k < len; k++)
			{
				num[k] *= 2;
			}
			for(l = 0; l < len; l++)
			{
				if(num[l] >= 10)
				{
					num[l+1] += num[l] / 10;
					num[l] %= 10;
				}
			}
			if ( num[len]!=0 ) len++ ;  
			
		}
		for( j=len-1 ;j >= 0; j--)
			cout << num[j];
	}
	return 0;
}
