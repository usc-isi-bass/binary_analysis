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
    char s[201];
    gets(s);
    int space;
    for(int i=0;s[i]!='\0';i++)
    {
	space=0;
	if(s[i]!=' '&&s[i+1]==' '&&s[i+2]==' ')
        {
	    for(int j=i+1;s[j]==' ';j++)
            {
		 space++;
            }
	    for(int t=0;t<strlen(s);t++)
            {
		 s[i+2+t]=s[i+1+t+space];
	    }
	}
    }
    puts(s);
return 0;
}