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
    char a[200];
    scanf("%s",a);
    int i,j,k;
    int len=strlen(a);
    char b=a[0];
    for(i=0;i<len;i++)
    {
        if(a[i]!=b&&a[i]!=0)
        {
            for(j=i;j>=0;j--)
            {
                if(a[j]!=a[i]&&((i-j-1)%2)==0&&a[j]!=0)
                {
                    a[j]=0;
                    a[i]=0;
                    printf("%d %d\n",j,i);
                    break;
                }
            }
        }
    }


}