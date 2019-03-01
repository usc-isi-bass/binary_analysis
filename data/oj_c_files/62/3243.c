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
    char a[500],b[500],c=0;
    gets (a);
    int i,j;
    j=strlen(a);
    for(i=1;a[i]!='\0';i++)
    {
       
        if((a[i]!=' '&&a[i-1]==' ')||a[i-1]!=' ')
        {
            b[c]=a[i-1];
           c++;
        }
    }
    b[c]=a[j-1];
    b[c+1]='\0';
   puts (b);
   return 0;
}
