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

int main ( )
{
	char str1[80], str2[80];
	int i;
	cin.getline(str1,80);
	cin.getline(str2,80);
	for (i = 0;i < 80;i++)
	{
		if (str1[i] >= 97 && str1[i] <= 122)
			str1[i] = str1[i] - 32;
		if (str2[i] >= 97 && str2[i] <= 122)
			str2[i] = str2[i] - 32;
	}
	for (i = 0;i < 80;i++)/*??????*/
	{
		if ((str1[i] == '\0') + (str2[i] == '\0') == 0)/*????????*/
		{
			if (str1[i] == str2[i] || 
				(str1[i] >= 97 && str1[i] <= 122 && str1[i] - str2[i] == 32) || 
				(str2[i] >= 97 && str2[i] <= 122 && str2[i] - str1[i] == 32))
				continue;
			else
			{
				if (str1[i] < str2[i])
				{
					cout << '<';
					break;
				}
				else 
				{
					cout << '>';
					break;
				}
			}
		}
		else if ((str1[i] == '\0') + (str2[i] == '\0') == 1)
		{
			if (str1[i] == '\0')
			{
				cout << '<';
				break;
			}
			else 
			{
				cout << '>';
				break;
			}
		}
		else if ((str1[i] == '\0') + (str2[i] == '\0') == 2)/*??????\0*/
		{
			cout << '=';
			break;
		}
	}
 	return 0;
}