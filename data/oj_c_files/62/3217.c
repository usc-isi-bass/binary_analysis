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
    char zfc[266],*a,*k;
    int n,i,j,s,c=0;
    gets(zfc);
    s=strlen(zfc);
    for(i=0;i<s;i++)
        {
            for(a=zfc;*a!='\0';a++)
                {
                    if(*(a-1)==' '&&*a==' ')
                        {
                            for(a=a;*a!='\0';a++) *a=*(a+1);
                        }
                }
        }
    puts(zfc);
    return 0;
}



