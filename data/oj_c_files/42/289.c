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
int i,j,m,k,str[100000];
scanf("%d\n",&m);
for(i=0;i<m;i++)
{
scanf("%d ",&str[i]);
}
printf("\n");
scanf("%d\n",&k);
for(j=0;str[j]==k;j++);
printf("%d",str[j]);
for(j=j+1;j<m;j++)
{
if(str[j]!=k)
{printf(" %d",str[j]);}
}
}