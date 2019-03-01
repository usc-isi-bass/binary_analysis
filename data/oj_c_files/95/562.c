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
    char a[80],b[80];
    int i=0;
    gets(a);
    gets(b);
    while (a[i]!='\0')
    {
          if (a[i]>='a'&&a[i]<='z') a[i]-=32;
          i++;
          }
    i=0;
    while (a[i]!='\0')
    {
          if (b[i]>='a'&&b[i]<='z') b[i]-=32;
          i++;
          }
    if (strcmp(a,b)<0) printf("<");
    if (strcmp(a,b)>0) printf(">");
    if (strcmp(a,b)==0) printf("=");
}
          
