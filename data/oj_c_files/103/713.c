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
	int i,j;
    char c,s[1000];
    scanf("%s", s);
    for (i=0;i<=999;i++)
    {
		if (s[i]>'Z')
        s[i]=s[i]-32;
		}
        c=s[0];j=1;
        for (i=1;i<=strlen(s);i++)
        {
			if (s[i]==c)
            j++;
            else 
            {  
				printf("(%c,%d)",c,j);
	            j=1;c=s[i];
	  
            }

        }
        return 0;

}
