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

//*********************
//function:??????
//date:2012/12/28
//writer:???
//*********************
int main()
{
	char a[1000] = {0};
	cin.getline(a, 1000);
	int len;
	int i;
	int longhead = 0, longend = 0, shorthead = 0, shortend = 0;
	int longlen = 0, shortlen = 100, templen = 0, temphead = 0;
	len = strlen(a);

	for (i = 0;i < len;i++)
	{
		if (a[i] != ' ' && a[i] != ',')
			templen++;
		else
		{
			if (templen > longlen)
			{
				longlen = templen;
				longhead = temphead;
				longend = i - 1;
			}
			if (templen < shortlen)
			{
				shortlen = templen;
				shorthead = temphead;
				shortend = i - 1;
			}
			temphead = i + 1;
			templen = 0;
			if (a[i] == ',')
				i++;
		}
	}
	if (templen > longlen)
	{
		longlen = templen;
		longhead = temphead;
		longend = i - 1;
	}
	if (templen < shortlen)
	{
		shortlen = templen;
		shorthead = temphead;
		shortend = i - 1;
	}
	for (i = longhead;i <= longend;i++)
		cout << a[i];
	cout << endl;
	for (i= shorthead;i <= shortend;i++)
		cout << a[i];
	cout << endl;
	return 0;
}