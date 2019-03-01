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
 char *p;
 int i;
 p=(char *)malloc(31*sizeof(char));
 for(i=0;i<31;i++)
    scanf("%c",(p+i));
 for(i=0;i<31;i++)
    {
     if((*(p+i)!='0')&&(*(p+i)!='1')&&(*(p+i)!='2')&&(*(p+i)!='3')&&(*(p+i)!='4')&&(*(p+i)!='5')&&(*(p+i)!='6')&&(*(p+i)!='7')&&(*(p+i)!='8')&&(*(p+i)!='9'))
     printf("\n");
     else
     printf("%c",*(p+i));
    }
}