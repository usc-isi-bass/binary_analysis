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
	int i,j,athena,zeus;
	char a[50],b[50],*pa,*pb; 
	scanf("%s %s",a,b);
	pa=a;pb=b;
    athena=0;
    for(i=0;i<strlen(b)&&athena!=1;i++,pb++)
	{
		
		if(*pb==*pa)
		{zeus=0;
		for(j=i;j<i+strlen(a);j++,pa++,pb++)
			{
				if(*pb!=*pa)zeus=1;
			}
		    if(zeus==0)athena=1;
			pa=a;pb=&b[i];
		}
		if(athena)
			printf("%d",i);
	}
}