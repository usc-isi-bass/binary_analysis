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


int f[50];

void func(char* pat)
{
	int len = strlen(pat);
	f[0] = -1;
	for(int i=1; i<len; i++)
	{
		int j = f[i-1];
		while(j>=0 && pat[i] != pat[j+1])
			j = f[j];
		if(j == -1)
			f[i] = -1;
		else
			f[i] = j+1;
	}
}

int main()
{
	char str[51], pat[51];
	scanf("%s%s", pat, str);
	func(pat);
	int str_len = strlen(str);
	int pat_len = strlen(pat);
	int i=0, j=0;
	while(i<str_len && j<pat_len)
	{
		if(str[i] == pat[j])
		{
			i++;
			j++;
		}
		else
		{
			if(j == 0)
				i++;
			else
				j = f[j-1]+1;
		}
	}
	if(j == pat_len)
		printf("%d", i-pat_len);
}