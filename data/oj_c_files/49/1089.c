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
	char str[500];
	int i, j, k,len,l;
	cin.getline(str,500);

	len=strlen(str);

	for (i=2;i<=len;i++)
	{
		for (k=0;k<=len-i;k++)
		{
			for (j=k,l=i+k-1; j<i+k; j++,l--)
			{
				if (str[j] != str[l])
					break;
			}
			if (j==i+k)
			{
				for (j=k;j<i+k;j++)
					cout << str[j];
				cout << endl;
			}
		}
	}

	return 0;
}
