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

main()
{
char a[81],b[81];
int lena,lenb,i,k=0;
gets(a);gets(b);
lena=strlen(a)-1;
lenb=strlen(b)-1;
for (i=0;i<lena;i++)
{ if ((a[i]>=65) && (a[i]<=90)) a[i]=a[i]+32;}
for (i=0;i<lenb;i++)
{ if ((b[i]>=65) && (b[i]<=90)) b[i]=b[i]+32;}
for (i=0;i<=lena;i++)
{
k=k+1;
if (a[i]<b[i]) {printf ("<"); goto end_loop;}
if (a[i]>b[i]) {printf (">"); goto end_loop;}
}
if (k=lena) printf ("=");
end_loop:
return 0;
}