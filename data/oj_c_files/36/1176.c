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
int i,j,x=0,y=0;
char a[10],b[10];

scanf("%s %s",a,b);

for(i=0;i<strlen(a);i++)x=x+a[i];
for(j=0;j<strlen(b);j++)y=y+b[j];

if(x==y)printf("YES");
else printf("NO");
}