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
	int n,i=0;
	char (*s)[100],*a,*b;
    s=(char (*)[100])malloc(100*100*sizeof(char));
    a=(char *)malloc(100*sizeof(char));
    b=(char *)malloc(100*sizeof(char));
    while(scanf("%s",*(s+i))!=EOF)
    {i++;}
    n=i;
    strcpy(a,*(s+n-2));
    strcpy(b,*(s+n-1));
    for(i=0;i<n-2;i++)
    {
        if (strcmp(a,*(s+i))==0)
        {strcpy(*(s+i),b);}
    }
    for (i=0;i<n-3;i++)
    {printf("%s ",*(s+i));}
    printf("%s",*(s+n-3));
}