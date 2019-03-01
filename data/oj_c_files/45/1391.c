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
    int i,j,m;
    int num,la,lb;
    num=0;
    m=0;
    char a[50];
    char b[50];
    scanf("%s",a);
    scanf("%s",b);
    la=strlen(a);
    lb=strlen(b);
    for(i=0;i<lb-la;i++)
    {
       if(m) break;
       for(j=0;j<la;j++)
       {
          if(a[j]!=b[j+i])
          {
             num=num+1;
             break;
          }
          m=1;
       }
    }
    printf("%d",num);
    return 0;
}