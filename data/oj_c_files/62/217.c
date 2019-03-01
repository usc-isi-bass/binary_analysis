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
    char a[1000];
    gets(a);
    int i,t;
    t=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            t++;
            if(t!=1) continue;
        }
        else t=0;
        printf("%c",a[i]);    
    }
    return 0;
}
           
        
