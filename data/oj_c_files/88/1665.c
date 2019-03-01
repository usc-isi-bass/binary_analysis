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
	char a[1000];
	char *p;
	int len,i,j,st;
	p=a;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if((*(p+i)>=48)&&(*(p+i)<=57))
		{
			st=1;
		    printf("%c",*(p+i));
		}
		else
		{
			if(st==1)
			{
				printf("\n");
				st=0;
			}
			else
				st=0;
		}
	}



	return 0;
}