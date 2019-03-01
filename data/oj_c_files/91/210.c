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
char a[200];
int i,n;
gets(a);
n=strlen(a);
*(a+n)=*a;
for(i=0;i<n;i++)
printf("%c",*(a+i)+*(a+i+1));

return 0;}
