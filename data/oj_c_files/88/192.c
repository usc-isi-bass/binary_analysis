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
    
    int n,m=0;
	char *s,*ps;
    s=(char*)malloc(1000*sizeof(char));
    gets(s);
	n=strlen(s); 
	
	for(ps=s;*ps!='\0';ps++)
	{	
		if(*ps>='0' && *ps<='9')
			printf("%c",*ps);
		else
		{
			if(*(ps+1)<58 && *(ps+1)>47)
				printf("\n");
		}

	}
}