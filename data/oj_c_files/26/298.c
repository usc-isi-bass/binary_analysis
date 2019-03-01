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

//****************************************
//???????????
//??????
//?????2010.12.10
//????????????
//****************************************
int main()
{
	char str[1000];
	cin.getline(str,1000);
	int count = 0;
	char *p = NULL;
	for (p = str;p < (str + 1000); p++)
	{
		if (*p == '\0')
			break;
		else if (*p != ' ')
			cout << *p;
		else
			count++;
		if ((count > 1)&&(*p==' ')&& (*(p+1) ==' '))
			continue;
		if (count == 1)
			cout << *p;
		if ((*p==' ')&& (*(p+1) !=' '))
			count = 0;
	}
	return 0;
}