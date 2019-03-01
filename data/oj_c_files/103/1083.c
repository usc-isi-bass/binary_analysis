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

main()
{
    char string[1001];
    int time,m,n,i,j,k;
    gets(string);
    m=strlen(string);
    for (i=0;i<m;i++)
    {
    	if (string[i]>='a'&&string[i]<='z')
    	    string[i]=string[i]-32;
    }
    time=1;
    for (i=0;i<m;i++)
    {
		if (string[i+1]==string[i])
		{
			time=time+1;
		}
		else 
		{
			printf ("(%c,%d)",string[i],time);
			time=1;
		}
    }
}