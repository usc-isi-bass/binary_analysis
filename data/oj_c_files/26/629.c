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
	char s[101];
	int l,i,j;
	cin.getline (s,101);
	l = strlen (s);
	for (i = 1;i <= l-1;i++)
	{
		if ((s[i] == ' ') && (s[i-1]== ' '))
		{
			for (j = i;j <= l-2;j++) 
				s[j]=s[j+1];
			l--;
			i--;
		}
	}
	for (i = 0;i <= l-1; i++)
		cout << s[i];
    return 0;
}