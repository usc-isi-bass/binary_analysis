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
	char a[300]={0},*p=a;
	int b[26]={0},i,count,*q;
	gets(p);
	for(p=a,count=0,q=b;*p!='\0';p++)
	{
		if(islower(*p))
		{
			count++;
			(*(q+*p-'a'))++;
		}
	}
	if(count==0)
		printf("No");
	else
	{
		for(q=b;q<b+26;q++)
		{
			if(*q>0)
				printf("%c=%d\n",(q-b+97),*q);
		}

	}
}
