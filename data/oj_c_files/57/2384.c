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
{int n,i,num,j,k;
char a[30][30];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s",a[i]);
num=strlen(a[i]);
if(a[i][num-1]=='r')
a[i][num-2]='\0';
if(a[i][num-1]=='y')
a[i][num-2]='\0';
if(a[i][num-1]=='g')
a[i][num-3]='\0';
}
for(i=0;i<n;i++)
puts(a[i]);
}