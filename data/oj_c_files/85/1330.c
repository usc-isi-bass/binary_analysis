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
    int i=0,j,n,p,a,b,m;
    char A[30],M[5];
    gets(M);
    n=atoi(M);
    while(i<n)
    {
        for(p=0;p<30;p++)
        {
            A[p]=0;
        }
        gets(A);
        m=strlen(A);
        b=A[0];
        if(b<65||(90<b&&b<95)||b==96||(b>122))
        {
            printf("no\n");
            goto k;
        }else{
        for(j=1;j<m;j++)
        {
           a=A[j];
           if((a<48)||(a>57&&a<65)||(90<a&&a<95)||a==96||(a>122))
           {
               printf("no\n");
               goto k;
           }
        }
        printf("yes\n");
    }
 k:   i++;
    }
    return 0;
}