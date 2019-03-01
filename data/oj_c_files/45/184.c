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
int n1,n2,i,j,v,k;
char a[100],b[100];
scanf("%s %s",a,b);
n1=strlen(a);
n2=strlen(b);
for(i=0;i<=n2-n1;i++)
{	k=i;v=1;
	for(j=0;j<n1;j++)
	{if(a[j]==b[k]) v=v*1;
	else v=v*0;
	k++;}
	if (v==1) {printf("%d",i);break;}
}
}