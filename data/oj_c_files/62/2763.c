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
    char a[500];
    int i;
    gets(a);
    for (i=0;a[i+1]!='\0';i++)
    {
        if (a[i]==' '&&a[i+1]==' ')
        {
             continue; 
                    
        }
        printf("%c",a[i]);
    }
    
     printf("%c",a[strlen(a)-1]);
    

    return 0;
}