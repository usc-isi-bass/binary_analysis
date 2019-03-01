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
    char s[5000];
    char words[1000][1000];
    int i, k=0, n=0,a,b;
    gets(s);
    for (i=0; s[i]!=0; i++) {
        if (s[i] == ' ') 
		{
            s[i] = '\0';
            strcpy(words[n], (s+k));
            n++;
            k=i+1;
        }
    }
    strcpy(words[n], (s+k));
    n++;	 
    a=strlen(words[0]);
	b=strlen(words[0]);

	for(i=0;i<n;i++)
	{
		if(a>strlen(words[i]))
		{
			a=strlen(words[i]);
		}
	    if(b<strlen(words[i]))
		{
			b=strlen(words[i]);
		}
	}

	for(i=0;i<n;i++)
	{
		if(b==strlen(words[i]))
		{
			printf("%s\n",words[i]);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a==strlen(words[i]))
		{
			printf("%s",words[i]);
			break;
		}
	}

 
    return 0;
}