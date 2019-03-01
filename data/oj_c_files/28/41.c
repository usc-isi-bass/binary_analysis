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
char a[300][20];
int i,len[300],l;
for(i=0;scanf("%s",a[i])!=EOF;i++)
len[i]=strlen(a[i]);
l=i;
for(i=0;i<l;i++)
{
	printf("%d",len[i]);
	if(i!=l-1)
	printf(",");
	}
printf("\n");
}