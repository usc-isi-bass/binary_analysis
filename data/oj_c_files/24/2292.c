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

/**********************************
/* ?  ?: ??????
/* ?  ?: ???  1200012861
/* ?  ?: 2012?12?24?
**********************************/


int main()
{
	char str[2000];
	int maxLen = 0, minLen = 100, tempLen = 0, i, len, minStart, maxStart;
	cin.getline(str, 2000);
	len = strlen(str);
	for (i = 0; i <= len; i++)
	{
		if (str[i] != ' ' && str[i] != '\0') 
			tempLen++; //??????????????????+1
		else //??????????
		{
			if (tempLen < minLen) //??????????????????? 
			{
				minLen = tempLen; //????
				minStart = i - minLen; //??????????????
			}
			if (tempLen > maxLen) //???????????????????
			{
				maxLen = tempLen; //????
				maxStart = i - maxLen; //??????????????
			}
			tempLen = 0;
		}
	}
	for (i = maxStart; i < maxStart + maxLen; i++)
		cout << str[i];
	cout << endl;
	for (i = minStart; i < minStart + minLen; i++)
		cout << str[i];
	cout << endl;
	return 0;
}
