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
	char str[101];
	int i,flag=1,j=0;
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			flag=0;
			j++;
		}
		else 
		{
			j=0;
			flag=1;
		}
		if(!(flag==0&&j>1))
			printf("%c",str[i]);
	}
}