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
    char c[100],z;
    int i,j=0,k,n,a[50];
    gets(c);
    n=strlen(c);
    z=c[0];
    for(i=0;i<n;i++)
    {
        if(c[i]==z) {a[j]=i;j++;}
        else
        {
            for(k=j-1;k>=0;k--)
            {
                 if(a[k]>=0) 
                 {printf("%d %d\n",a[k],i);a[k]=-1;break;} 
            } 
        } 
    }                     
}