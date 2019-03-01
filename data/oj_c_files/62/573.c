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
    int i;
    p=(char *)malloc(1000*sizeof(char));
    scanf("%c",p);  
    for (i=0;scanf("%c",p+i+1)!=EOF;i++)
    {
        if (isspace(*(p+i))==0)
        printf("%c",*(p+i));
        if (isspace(*(p+i))&&isspace(*(p+i+1))==0)
        printf(" ");
    }
    
    return 0;
}
