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
	int i,j,n,s,k,d;
	int a[26],b[26];          /*?b[i]????i????????*/
	scanf("%d",&n);
	for(i=1;i<=n;i++)          /*???????b[i]????*/
	{
		scanf("%d",&a[i]);
		b[i]=0;
	}
         b[n]=1;
	for(i=n-1;i>=1;i--)     /*b[i]??i????????1*/
	{
		for(j=i+1;j<=n;j++)
			if((a[j]<=a[i])&&(b[j]>b[i]))
				b[i]=b[j];
		b[i]=b[i]+1;
	}
	s=0;
	for(i=1;i<=n;i++)     /*?????b[i]??????*/
	{
		if(s<b[i])
			s=b[i];
	}
	printf("%d",s);
}