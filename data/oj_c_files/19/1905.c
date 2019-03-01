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

int main(void)
{
	char a[100],b[100],c[100],d[100],e[100]="\0";
	int i,j;
	char *s;
	gets(a);
	gets(b);
	gets(c);
    s=a;
	strcat(a," ");
	for(i=0;a[i]!='\0';i++)
	{
		j=0;
		while(a[i]!=' ')
		{
			d[j]=a[i];
			i++;
			j++;	
		}
		d[j]='\0';
		if((!strcmp(d,b))&&(d[0]!='\0'))
		{
			strcat(e,c);	
		}
		else
		{
			strcat(e,d);	 
		}
		if(a[i+1]!='\0') strcat(e," ");
		
	}
		puts(e);
}
