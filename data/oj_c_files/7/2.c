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
	char sub[257], s1[257], s2[257];
	int i, j, k, str1, str2;
	scanf("%s", sub);
	scanf("%s", s1);
	scanf("%s", s2);
	str1 = strlen(sub);
	str2 = strlen(s1);
	for (i=0;i<str1;i++)
		if (sub[i] == s1[0])
		{
			for (j=0;j<str2;j++)
				if (sub[i+j] != s1[j]) break;
			if (j==str2) 
			{
				for (j=0;j<str2;j++)
					sub[i+j] = s2[j];
				break;
			}
		}
	printf("%s\n", sub);
	return 0;
}