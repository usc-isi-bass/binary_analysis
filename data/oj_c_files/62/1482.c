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
	char *str,*p,*start;
	str=(char *)calloc(1000,sizeof(char));
	gets(str);

	int countspace=0;
	start=str;

	for (p=str;*p!='\0';p++)
		if (*p==' ')
		{
			if (*(p-1)!=' ') start=p;
			countspace++;
			if (*(p+1)!=' ')
			{
				if (countspace>1)
					for (p=start+1;*(p-1)!='\0';p++)
						*p=*(p+countspace-1);
				countspace=0;
				p=start+1;
			}
		}

	puts(str);
	free(str);
	return 0;
}