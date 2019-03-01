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
	char str[101]={'\0'};
	char a[101]={'\0'}; 
	int i,m=0,n=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			a[i-n]=str[i];
			m=0;
		}
		else if(str[i]==' ' && m==0)
		{
			a[i-n]=str[i];
			m=1;
		}
		else if(str[i]==' ' && m==1)
		n++;
	}
	puts(a);	return 0;
} 
