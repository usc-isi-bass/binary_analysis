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
	char str[1000];
	int i, j, ii, jj, len, q;
	cin >> str;
	len = strlen(str);
	for (q = 2; q <= len; q++)
	{
	for (i = 1; str[i] != 0; i++)
	{
		ii = i;
		jj = i;
		if (str[i - 1] == str[i + 1])
		{
			while ((str[ii] == str[jj]) && (ii >= 0) && (str[jj] != 0))
			{
				if (ii != jj)
				{
					if (jj - ii + 1 == q){
					for (j = ii; j <= jj; j++)
						cout << str[j];
					cout << endl;}
				}	
				ii --;
				jj ++;
			}
		}
		/*else
			if ((str[i - 1] == str[i]))
			{
				ii --;
				while ((str[ii] == str[jj]) && (ii >= 0) && (str[jj] != 0))
			{
				if (ii != jj)
				{
					for (j = ii; j <= jj; j++)
						cout << str[j];
					cout << endl;
				}	
				ii --;
				jj ++;
			}
			}*/
			else
				if (str[i] == str[i + 1])
					{
				jj ++;
				while ((str[ii] == str[jj]) && (ii >= 0) && (str[jj] != 0))
			{
				if (ii != jj)
				{
					if (jj - ii + 1 == q)
					{
					for (j = ii; j <= jj; j++)
						cout << str[j];
					cout << endl;
					}
				}	
				ii --;
				jj ++;
			}
			}
	}  
	}
	return 0;
}