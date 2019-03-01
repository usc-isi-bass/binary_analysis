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
	char str[100];
	int i,k,j;
	gets(str);
	i=strlen(str)-1;
	for(j=i,k=i;i>=0;i--)
	{
		if(str[i]==' '||i==0)     		
{
			j=i;
			if(i==0)
				for(;i<=k;i++)
					printf("%c",str[i]);
			else
				for(i=i+1;i<=k;i++)
					printf("%c",str[i]);
			if(j>0)    
				printf(" ");
			i=j;k=j-1;  
		}
	}
}
