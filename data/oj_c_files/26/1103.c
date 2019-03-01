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
    char a[101];
    int i,t;
    gets(a);
    t=1;
    for(i=0;a[i]!='\0';i++)
    {	
	if(a[i]==' ')
	{
	    if(t==1)
	    {
		printf(" ");
		t++;
	    }
	}
	else
	{
	    printf("%c",a[i]);
	    t=1;
	}
    }
	return 0;
}

