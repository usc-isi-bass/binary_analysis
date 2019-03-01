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
    char a[100],b[100][100];
    int n,i,j;
    n=0;
    while (scanf ("%s",&a)!=EOF)
    {
          j=strlen(a);
          for (i=0;i<j;i++)
          b[n][i]=a[i];
          n++;
    }
    for (i=0;i<n-1;i++)
    printf("%s ",b[n-i-1]);
    printf("%s",b[0]);
    return 0;
}