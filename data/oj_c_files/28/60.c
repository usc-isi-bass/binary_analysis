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
char a[500][60];
int i,j,k,n=0,m,q[500];
while(scanf("%s",a[n])!=EOF)n++;
for(i=0;i<n;i++)
q[i]=strlen(a[i]);
for(i=0;i<n;i++)
i==0?printf("%d",q[i]):printf(",%d",q[i]);
}