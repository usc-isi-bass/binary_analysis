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
	int i,j,k,n;
	char a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	scanf("%s%s",a,b);
	for(j=strlen(a)-1,k=strlen(b)-1;k>=0;j--,k--)
	{
		a[j]=a[j]-b[k]+'0';
		if(a[j]<'0')
		{
          a[j]=a[j]+10;
		  a[j-1]=a[j-1]-1;
		}
	}
	k=strlen(a);
   for(j=0;a[j]=='0';j++);
	for(;j<k;j++)
		printf("%c",a[j]);
	printf("\n");
}
}
