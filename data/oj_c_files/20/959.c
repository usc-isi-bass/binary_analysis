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
	char str[15];
	char substr[4];
	int i,maxi,L;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		maxi = 0;
		i=1;
		while(str[i])
		{
			if(str[i]>str[maxi])
				maxi = i;
			i++;
		}
		L =strlen(str);
		i = L;
		while(i!=maxi)
		{
			str[i+3] = str[i];
			i--;
		}
		i = 0;
		while(i<3)
		{
			str[maxi+1+i] = substr[i];
			i++;
		}
		printf("%s\n",str);
	}
	return 0;
}