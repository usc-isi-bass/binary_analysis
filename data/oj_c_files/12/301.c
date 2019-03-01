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

int main()
{
	int a[16], len, count;                  //len???????count??????
	while(1)
	{
		cin >> a[0];
		if (a[0] == -1)                     //??????
		{
			break;
		}
		count = 0;
		len = 0;
		do
		{
			len++;
			cin >> a[len];
		}while (a[len] != 0);
		for (int i = 0; i < len; i++)       //a[len]=0???"<"
			for (int j = 0; j < len; j++)
			{
				if (j == i)
					continue;               //???????
				else
				{
					if (a[j] == (2 * a[i]))   
					{	
						count++;            //????????????????
                        break;              //????????
					}
				}
			}
		cout << count << endl;
	}
	return 0;
}