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
char a[1000],b[1000];
int n,i;
gets(a);
n=strlen(a);
char *p=a,*q=b;

for(i=0;i<n-1;i++)
{
*(q+i)=*(p+i)+*(p+i+1);
}
*(q+n-1)=*(p+n-1)+*p;
for(i=0;i<n;i++)
printf("%c",*(q+i));
return 0;
}

