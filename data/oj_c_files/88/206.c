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
    char *p;
    int i,l;
    p=(char *)malloc(30*sizeof(char));
    gets(p);
    l=strlen(p);
    for (i=0;i<l-1;i++)
    {
        
        if (isdigit(*(p+i)))
        printf("%c",*(p+i));
        if (isdigit(*(p+i))&&isdigit(*(p+i+1))==0)
        printf("\n"); 
    }
    if (isdigit(*(p+l-1)))
    printf("%c",*(p+l-1));
    return 0;
}
