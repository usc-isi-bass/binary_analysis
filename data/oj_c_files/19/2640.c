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
    char s[100],a[100],b[100],words[100][100];
    int i,k=0,n=0;
    gets(s);
    gets(a);
    gets(b);
    	for (i = 0; s[i] != 0; i++) {
        if (s[i] == ' ') {
            s[i] = '\0';
            strcpy(words[n], (s + k));
            n++;
            k = i + 1;
        }
    }
	strcpy(words[n], (s + k));
    n++;
    for(i=0;i<n-1;i++)
    {
    	if(strcmp(words[i],a)==0)
    	{
    	printf("%s ",b);
    	}
    	else 
    	{
    	printf("%s ",words[i]);
    	}
    }
    if(strcmp(words[n-1],a)==0)
    	{
    	printf("%s",b);
    	}
    	else 
    	{
    	printf("%s",words[n-1]);
    	}
}