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
    int n,i,an[10];
    scanf("%d",&n);
    int j=0;
    for(i=n;i>0;i=i/10)
    {
      an[j]=i%10;
      j++;
    }
    for(i=0;i<j;i++)
    {
     printf("%d",an[i]);
    }
    return 0;
}
