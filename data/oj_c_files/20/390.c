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

char * strInsert(char *str, int n, const char *strIn)
{
	int l = strlen(strIn);
	int i;
	for (i=strlen(str);i>n; i--)
		*(str+i+l)=*(str+i);
	for (i=0;i<l;i++)
		*(str+n+1+i)=*(strIn+i);
	return str;
}
void main()
{
	char str[15], substr[4];
	int i, max;
	short flag;
	do
	{
		flag = scanf("%s %s", str, substr);
		if (flag<2) break;
		max = 0;
		for (i=1; i<strlen(&str[0]); i++)
		{
			if (*(str+i)>*(str+max))
			{
				max = i;
			}
		}
		puts(strInsert(str, max, substr));
	}while (getchar()!=EOF);
}