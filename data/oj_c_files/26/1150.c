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
	char blabla[5000];
	int len,i;
	gets(blabla);
	len=strlen(blabla);
	for(i=0;i<len;i++)
	{
		switch (blabla[i])
		{
		case ' ':
			if(i!=0&&blabla[i-1]!=' ')
				printf("%c",blabla[i]);
			break;
		default:
			printf("%c",blabla[i]);
			break;
		}
	}
	printf("\n");
	return 0;
}
