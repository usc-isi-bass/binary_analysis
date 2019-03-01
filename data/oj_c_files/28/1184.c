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
	char string[5000];
	int i,num=0,n;
	char c;
	gets(string);
	n=strlen(string);
	for(i=0;i<=n-1;i++)
	{
		if((c=string[i])!=' ')
		num=num+1;
		else
		{
		    if(num!=0)
			{printf("%d,",num);
			num=0;}
		}

	}	
    printf("%d",num);
}
