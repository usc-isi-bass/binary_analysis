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
	char s[101];
	int i,l,j;
	gets(s);
	l=strlen(s);
	for(i=l-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
    		for(j=i+1;;j++)
		    {
    			if(j>=l||s[j]==' ')break;
		    	printf("%c",s[j]);
		    }
			printf(" ");
		}
		else if(i==0)
			for(j=0;;j++)
		    	{
    				if(j>=l||s[j]==' ')break;
					printf("%c",s[j]);
		    	}
	}
	printf("\n");
}