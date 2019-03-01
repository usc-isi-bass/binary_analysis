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


int main(void)
{
	int i,j,m,n;
	int num[100], result[100], temp;

	i=0;
	j=0;
	while(1)
	{
		cin >> num[i];
		if(num[i] == -1)
		{
			break;
		}

		while(1)
		{
			if(num[i] == 0)
			{
				temp = 0;
				for(m=0; m<i; m++)
				{
					for(n=0; n<i; n++)
					{
						if(num[m] == 2*num[n])
						{
							temp++;
						}
					}
				}
				result[j] = temp;

				i=0;
				j++;
				break;
			}
			else
			{
				i++;
				cin >> num[i];
			}
		}
	}

	for(m=0; m<j; m++)
	{
		cout << result[m] << endl;
	}
	return 0;
}