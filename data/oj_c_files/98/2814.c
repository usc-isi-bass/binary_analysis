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
	int n;
	int i;
	int l;
	int left = 80;
	char word[10000][42];
	scanf("%d", &n);
	for(i = 0; i<n;i++)
	{
		scanf("%s", word[i]);
	}
	for(i = 0; i<n;i++)
	{
		l = strlen(word[i]);
		if(left == 80)
		{
			printf("%s", word[i]);
			left -= l;
		}
		else if(left >= l+1)
		{
			printf(" %s", word[i]);
			left -= l+1;
		}
		else
		{
			printf("\n%s", word[i]);
			left = 80 - l;
		}
	}
	return 0;
}