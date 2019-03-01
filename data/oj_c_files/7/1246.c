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
	char str[256], substr[256], rep[256];
	int i, j, flag = 1, flag1 = 0;
    cin >> str;
	cin >> substr;
	cin >> rep;
	int nlen = strlen(str);
	int slen = strlen(substr);
	int rlen = strlen(rep);
	if (slen != rlen) 
	{cout << "hehe" << endl;}
    for (i = 0; i < nlen; i++)
	{
		for (j = 0; j < slen; j++)
		{
            if (substr[j] != str[i + j])
			{	flag = 0; break;}
			else 
			{
				flag = 1;
			}
		}
		if (flag)
		{
			for (int k = 0; k < slen; k++)
			{
				str[i + k] = rep[k];
			}
			flag1 = 1;
		}
		if (flag1)
		{break;}
	}
	cout << str << '\n';
	return 0;
}