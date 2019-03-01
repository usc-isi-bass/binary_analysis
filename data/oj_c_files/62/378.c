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
    int n,i,k,l,j;
	char s[200],c[200];
    gets(s);
	j=1;
	c[0]=s[0];
	for(k=1;s[k]!='\0';k++)
	{
	if(s[k-1]==32)
		{
			if(s[k]!=32) {c[j]=s[k];j++;}
		}
		else{
			c[j]=s[k];
			j++;
		}
	}
	c[j]='\0';
	 puts(c);
return 0;
}
