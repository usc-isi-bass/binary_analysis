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
char a[101],b[101];
int c,d=0,i,j=0;
gets(a);
c=strlen(a);
for(i=0;i<101;i++)
{b[i]=0;}
if(a[0]!=' ')
{b[0]=a[0];
j++;}
for(i=1;i<c;i++)
{if(a[i]!=' '||a[i]==' '&&a[i-1]!=' ')
{b[j]=a[i];
j++;}}
for(i=0;i<101;i++)
{if(b[i]!=0)
printf("%c",b[i]);}

return 0;
}

