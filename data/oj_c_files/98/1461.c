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
{int n,i,j,l=0;
char a[40];
scanf ("%d",&n);
for (i=0;i<n;i++)
{scanf("%s",a);
j=strlen (a);
if(l==0)  {a[j]='\0';printf("%s",a);l=l+j+1;}
else
if (l+j<=80) {a[j]='\0';printf(" %s",a);l=l+j+1;}
else {printf("\n%s",a);l=j+1;}
}
return 0;
}
