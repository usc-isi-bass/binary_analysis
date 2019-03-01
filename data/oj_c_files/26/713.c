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
    char w[100]; 
    int sentencelength,i,c=0;
	gets(w);
    sentencelength=strlen(w);

    for (i=1;i<sentencelength;i++) 
	{
        if (w[c]== ' '&&w[i]==' ')
            continue;
        else 
		{
            c++;
            w[c]=w[i];
		}
	}
	w[++c]='\0';
    puts(w);
    return 0;
}
