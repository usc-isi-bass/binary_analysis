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

void main()
{
	char s[50],w[50];
	int i,j;
	scanf("%s%s",s,w);
	for (i=0;i<strlen(w);i++)
		if (w[i]=s[0])
		{
			for (j=1;j<strlen(s);j++)
				if (w[i+j]!=s[j]) break;
			if (j==strlen(s))
			{
				printf("%d",i);
				break;
			}
		}
}