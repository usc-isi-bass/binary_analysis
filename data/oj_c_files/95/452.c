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

void main()
{
 char a[80],b[80];
 int i,j;
 gets(a);gets(b);
 for (i=0;i<=strlen(a)-1;i++)
   if ((a[i]>=65)&&(a[i]<=96))
     a[i]=a[i]+32;
 for (i=0;i<=strlen(b)-1;i++)
   if ((b[i]>=65)&&(b[i]<=96))
     b[i]=b[i]+32;
 j=strcmp(a,b);
 if (j==0)
   printf("=\n");
   else if (j>0)
     printf(">\n");
     else printf("<\n");
}