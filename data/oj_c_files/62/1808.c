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

//*********************************
//*?????????            **
//*?????? 1100012914       **
//*???2011?11?26?          **
//*********************************


int main()
{
	char sen1[10000], sen2[10000] = {'0'}, *p, *q;
	int len, i, j = 0;

	cin.getline(sen1, 10000);
	len = strlen(sen1);
	for (i = 0; i < len; i++)
	{
		if (sen1[i] != ' ' || (sen1[i] == ' ' && sen1[i + 1] != ' '))
		{
			p = &sen1[i];
			sen2[j++] = *p;
			p++;
		}
	}
	len = strlen(sen2);
	for (i = 0; i < len; i++)
		cout << sen2[i];
	return 0;
}