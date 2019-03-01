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
int n,i,j,len;
char a[100];
scanf("%d",&n);
for(i=0;i<=n;i++)
{gets(a); 
len=strlen(a);
if (a[len-1]=='r'||a[len-1]=='y')
{
	for(j=0;j<=len-3;j++)
		printf("%c",a[j]);
}
else if(a[len-1]=='g')
{
	for(j=0;j<=len-4;j++)
		printf("%c",a[j]);
}
else for(j=0;j<=len-1;j++)
printf("%c",a[j]);
 printf("\n");
}
}
