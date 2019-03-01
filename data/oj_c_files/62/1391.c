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
    //char a[10000];
    char *p,*p1;
    p1=p=(char *)malloc(100*sizeof(char));
    int i,n;
    for(i=0;*(p+i-1)!='\n';i++)
    {
                            scanf("%c",(p+i));
                            //printf("%c",*(p+i));
    }
    n=i;
    //gets(a);
    //p=p1;
    for(;*p!='\0';p++)
    {
                         if(((*p!=' ')&&(*(p+1)==' '))||((*p==' ')&&(*(p+1)!=' '))||((*p!=' ')&&(*(p+1)!=' '))||((*p!=' ')&&(*(p+1)=='\0')))
                         {
                                      printf("%c",*p);
                        }}
    return 0;
}