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
    int i,j;
    char a[10000],b[10000];
    scanf("%s%s",a,b);
    if(strlen(a)==strlen(b))
    {
        for(i=0;i<strlen(a)-1;i++)
        {
            for(j=0;j<strlen(a)-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    char s;
                    s=a[j+1];
                    a[j+1]=a[j];
                    a[j]=s;
                }
            }
        }
        for(i=0;i<strlen(b)-1;i++)
        {
            for(j=0;j<strlen(b)-i-1;j++)
            {
                if(b[j]>b[j+1])
                {
                    char s;
                    s=b[j+1];
                    b[j+1]=b[j];
                    b[j]=s;
                }
            }
        }
    }   
    if(strcmp(a,b)==0)
        printf("YES");
    else
        printf("NO");
  
    return 0;
}
