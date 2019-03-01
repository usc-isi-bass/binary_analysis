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
    char chuan[10000];
    int i,j=0;
    char *p=chuan;
    gets(chuan);
    for (i=0;chuan[i]!='\0';i++)
    {
        if(chuan[i]!=' ')
        {
            j=j+1;
        }    
        if(chuan[i]==' '&&chuan[i-1]!=' ')
        {
            printf("%d,",j);
            j=0;
        }   
    }
    printf("%d",j);
}