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

//********************************************************
//*  ???:1.cpp                                        *
//*  ??????    1200012948                          *
//*  ????: 2012 12 24                                *
//*  ????:??????                               *
//********************************************************
int main()
{
	char str[3000];
	char *longest = NULL, *shortest = NULL;  //??????????????
	int max = 0, min = 9999, i, k = 0;
	cin.getline(str, 3000);
	int len = strlen(str);
	for(i = 0; i <= len; i++)
	{
		if(str[i] != ' ' && str[i] != ',' && str[i] != '\0')
		{
			k++;
		}
		else
		{
			if(k > max)
			{
				max = k;
				longest = str + i;   //?????????????
			}
			if(k < min)
			{
				min = k;
				shortest = str + i;
			}
			if(str[i] == ' ' || str[i] == '\0')
			    k = 0;
		}
	}
	for(i = 0; i < max; i++)
	{
		cout << *(longest - max);
		longest++;
	}
	cout << endl;
	for(i = 0; i < min; i++)
		{
			cout << *(shortest - min);
			shortest++;
		}
		cout << endl;
	return 0;
}
