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
	int start = 0;
    cin >> str;
	int i,s=0;
	int len=strlen(str);
	for (i=start;i < len;i++)
	{
		if(str[i] - '0' == str[i+1] - '0' || str[i] - '0' == str[i+1] - '0' + 32 || str[i] - '0' == str[i+1] - '0' - 32)
			s++;
		else
			if(str[i] < 'a')
				{cout <<"("<<str[i]<<"," << s+1 << ")";s=0;start=i+1;}
			else
				{str[i] = str[i] - 32;cout <<"("<<str[i]<<"," << s+1 << ")";s=0;start=i+1;}
	}
	return 0;
}