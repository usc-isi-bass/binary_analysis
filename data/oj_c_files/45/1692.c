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
    char s[50], w[50], c[50];
    scanf("%s %s",s,w);
    int i=0,j;
    for(i;i<(int)(strlen(w)-strlen(s));i++)
    {
            for(j=0;j<(int)(strlen(s));j++)
            {
                    c[j]=w[i+j];
            }
            c[j]='\0';
            if (strcmp(c,s)==0)
            break;
    }
    printf("%d",i);
	return 0;
} 
