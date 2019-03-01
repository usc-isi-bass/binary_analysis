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
    int i,j,k;
    char s1[100],s2[100];
    while (scanf("%s%s",&s1,&s2)!=EOF)
    {
          j=0; k=0;
          for (i=0;i<strlen(s1);i++)
          {
              if ((int)s1[i]>j)
              {
                 j=(int)s1[i]; k=i;
              }
          }
          for (i=0;i<strlen(s1);i++)
          {
              putchar(s1[i]);
              if (i==k)
              {
                 for (j=0;j<strlen(s2);j++)
                     putchar(s2[j]);
              }
          }
          printf("\n");
    }
}
