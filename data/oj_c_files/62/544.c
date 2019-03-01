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
	char *p;
	int i,j,k,num=0;
	p=(char *)malloc(10000*sizeof(char));
	gets(p);
	for (i=0;i<strlen(p)-num;i++)
	{
		if (*(p+i)==' '&&*(p+i+1)==' ')
		{
			k=i;
			for (j=i+1;j<strlen(p)-num;j++,i++)
				*(p+i)=*(p+j);
			num++;
			i=k-1;
		}
	}
	for (i=0;i<strlen(p)-num;i++)
		printf("%c",*(p+i));
	return 0;
}