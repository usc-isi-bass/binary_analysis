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
    int i;
    int num=1;
    char c[1000];
    scanf("%s",c);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i+1]==c[i]||abs(c[i+1]-c[i])==32)
            num+=1;
        else
        {
            c[i]=(c[i]>96)?(c[i]-32):c[i];
            printf("(%c,%d)",c[i],num);
            num=1;
            }
    }
    printf("\n");
    return(0);
}     
