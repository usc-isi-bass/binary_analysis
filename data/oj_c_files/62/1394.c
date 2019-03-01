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
    int i;
    char *p;
    p=(char*)calloc(1000,sizeof(char));
    gets(p);
    for(i=0;*(p+i)!='\0';i++)
    {if(*(p+i)!=' ')
    printf("%c",*(p+i));
    else {
         if(*(p+i+1)!=' ')
         printf(" ");
         } 
         }                  
}