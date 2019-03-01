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
	unsigned i,j,k,n;
	char a[50],b[50];
	scanf("%s %s",a,b);
    for(i=0;i<=strlen(b)-strlen(a);i++)
	{
		n=0;
		for(j=i,k=0;k<strlen(a);j++,k++)
		{
			if((int)(a[k]-b[j])==0)
				n++;
		}
	    if(n!=strlen(a))
			continue;
		
			printf("%d",i);
		    break;
	
	}

	return 0;

}