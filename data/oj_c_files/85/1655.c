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

int main ()
{int n,m,z,i,j;
char a[21];
scanf ("%d",&n);
for (i=0;i<n;i++)
{m=1;
scanf ("%s",a);
z=strlen(a);
if (a[0]<65 || (a[0]>90 && a[0]<97) || a[0]>122) m=0;
if (a[0]==95) m=1;
if (m==1)
for (j=1;j<z;j++)
{if (a[j]<48) m=0;
if (a[j]>57 && a[j]<65) m=0;
if (a[j]>90 && a[j]<95) m=0;
if (a[j]>95 && a[j]<97) m=0;
if (a[j]>122) m=0;
if (m==0) break;
}
if (m==0) printf ("no\n");
else
printf ("yes\n");
}
return 0;}