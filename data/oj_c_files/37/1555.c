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

//*************************************************
//***???????????????***
//***??????***
//***???2012.12.26***
//*************************************************
int main ()
{
	int t,i,j,k,flag,f;
	char a[100];
	cin >> t;
	for (i = 0; i < t; i++)
	{
		memset(a,'\0',sizeof(a));
		cin >> a;
		j = 0;
		f = 0;
		do
		{
			flag = 1;
			k = 0;
			while (a[k] != '\0')
			{
				if (a[k] == a[j] && k != j)
				{
					flag = 0;break;
				}
				else
					k++;
			}
			if (flag == 1)
			{
				cout << a[j] << endl;
				f = 1;
				break;
			}
			else
			{
				j++;
			}
		}
		while (a[j] != '\0');
		if (f == 0)
			cout << "no" << endl;
	}
	return 0;
}