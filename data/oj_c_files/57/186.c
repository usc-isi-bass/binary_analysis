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
{int n,i,m;
char a[100][50],b[100][50];
scanf("%d",&n);
for (i=1;i<=n;i++)
{scanf("%s",a[i]);
m=strlen(a[i]);
if (a[i][m-1]=='r'||a[i][m-1]=='y')
a[i][m-2]='\0';
if (a[i][m-1]=='g')
a[i][m-3]='\0';}
for (i=1;i<=n;i++)
printf("%s\n",a[i]);}

