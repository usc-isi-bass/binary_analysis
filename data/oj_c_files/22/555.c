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
    long int i,j,k,n,m;
    char c;
    c=',';
    m=-99990; n=-88880;
    while (c==',')
    {
          scanf("%d",&i);
          if (i>m)
          {
             n=m; m=i;
          }
          else if ((i>n)&&(i<m))  n=i;
          c=getchar();
    }
    if ((n!=-88880)&&(n!=-99990)) printf("%d",n);
    else printf("No");
}
