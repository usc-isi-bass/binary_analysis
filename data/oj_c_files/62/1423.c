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
	char *p,*q;
	int i,j,knum=0;
	p=(char*)malloc(1000*sizeof(char));
    q=(char*)malloc(1000*sizeof(char));
	gets(p);
	for(i=0,j=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)!=' ')
		{
			knum=0;
			*(q+j)=*(p+i);
			j++;
		}
		else
		{
			if(knum==0)
			{*(q+j)=*(p+i);j++;}
			knum++;
		}
	}
	*(q+j)='\0';
   puts(q);
}