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
	char a[100],b[100],c[100][100];
	int n,i,j,k,l1,l2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",a,b);
		l1=strlen(a);
		l2=strlen(b);
	   for(j=l1-1,k=l2-1;k>=0;j--,k--)
	   {
		   a[j]=a[j]-b[k]+'0';
	       if(a[j]<'0')
		   {
			   a[j]=a[j]+10;
			   a[j-1]=a[j-1]-1;
		   }
	   }
    	strcpy(c[i],a);
	}
	for(i=0;i<n;i++)
		printf("%s\n",c[i]);
}