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

//* * * * * * * * * * * * * * * * * * * * * * * * 
//*??????2?N??                         *
//*??????2?N?? .cpp                    *
//*?????  1000012839                       *
//*???2010.12.15                             *
//* * * * * * * * * * * * * * * * * * * * * * * * 



int main()
{
	int N;	//	??2?N???
	int i, j, k;	//	?????
	int num[100];	//	???????
	int result[100];	//	???????
	
	cin >> N;
	
	memset(num, 0, sizeof(num));	//	???
	memset(result, 0, sizeof(result));	//	???
	result[0] = 1;	//	2?0???1?
	for (i = 0; i < N; i++)	//	???????2?
	{
		j = 0;
		for (k = 0; k < 100; k++)
			num[j++] = result[k];	//	????????????num?
		memset(result, 0, sizeof(result));	//	result????????????
		for (j = 0; j < 100; j++)
			result[j] = 2 * num[j];	
		for (j = 0; j < 100; j++)
		{
			if (result[j] >= 10)
			{
				result[j + 1] += result[j] / 10;
				result[j] %= 10;	//	??10????
			}
		}
	}
	j = 99;
	while (result[j] == 0)
		j--;	//	???????????
	for ( ; j >= 0; j--)
		cout << result[j];	//	???????
	cout << endl;
	return 0;
}






