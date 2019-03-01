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
	int i;
	int l;
	int p=0,q=0;
	char a[40];
    char b[40][40];
	gets(a);
	l=strlen(a);
	*(a+l)='a';  //????????
	for(i=0;i<l;i++)
	{
		if((*(a+i)>='0')&&(*(a+i)<='9'))
		{
			*(*(b+p)+q)=*(a+i);
			q++;
			if((*(a+i+1)<'0')||(*(a+i+1)>'9'))
			{
				*(*(b+p)+q)='\0';
				p++;
				q=0;
			}
		}
	}
	for(i=0;i<p;i++)
		puts(*(b+i));
    return 0;
}