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
	char str[11],sub[4],a;
	int i,j,b;
	for(i=0;;i++)
	{
	    if(scanf("%s %s",str,sub)==EOF)
	    {
	        break;
	    }
	    else
	    {
	        a=0;b=0;
	        for(j=0;j<strlen(str);j++)
	        {
	            if(str[j]>a)
	            {
	                a=str[j];
	                b=j;
	            }
	        }
	        for(j=0;j<=b;j++)
	        {
	            printf("%c",str[j]);
	        }
	        printf("%s",sub);
	        for(j=b+1;j<strlen(str);j++)
	        {
	            printf("%c",str[j]);
	        }
	    }
	    printf("\n");
	}

	return 0;
}
