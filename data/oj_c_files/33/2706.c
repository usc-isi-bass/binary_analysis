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
    int n;
    scanf("%d",&n);
    int b[1000];
    char a[1000][256];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]); 
        b[i]=strlen(a[i]);
     }
     for(i=0;i<n;i++)
     {
        for(j=0;j<b[i];j++)
        {
            if(a[i][j]=='A')
            {
                printf("T");
             }
            if(a[i][j]=='T')
            {
                printf("A");
             }
            if(a[i][j]=='G')
            {
                printf("C");
             }
            if(a[i][j]=='C')
            {
                printf("G");
             }
          }
          printf("\n");
       }
    return 0;
}