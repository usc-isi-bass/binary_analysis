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
char a[100][20],c;
int b[100],k=0,i,max=0,min=100,s,t;
do
	{
		scanf("%s",a[k]);
		k++;
		scanf("%c",&c);
	}
	while(c!='\n');
for(i=0;i<k;i++)
{
	b[i]=strlen(a[i]);
	if(b[i]>max)
	{
		max=b[i];
		s=i;
	}
	if(b[i]<min)
	{
		min=b[i];
		t=i;
	}
}
printf("%s\n%s\n",a[s],a[t]);
}
