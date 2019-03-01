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
    p=(char *)malloc(1000*sizeof(char));
    gets (p);
    int i;
    for (i=0;*(p+i)!='\0';i++)
    {
        if (isdigit(*(p+i)))
        printf ("%c",*(p+i));
        if (isdigit(*(p+i))&&isdigit(*(p+i+1))==0)
        printf ("\n");
    }
    return 0;
}
