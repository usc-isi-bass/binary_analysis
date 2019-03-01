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
    int i,n,count=0;
    char a[301][500];
    int b[301];
    for(i=0;i<300;i++)
    {
                      scanf("%s",a[i]);
                      n=strlen(a[i]);
                      b[i]=n;
                      count++;
                      if(n==0)
                      break;
    }
    for(i=0;i<count-1;i++)
    {
                        if(i==0)
                        printf("%d",b[i]);
                        else
                        printf(",%d",b[i]);
    }
    return 0;
}