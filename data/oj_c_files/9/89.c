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
	int a[100],n,i,j,k=0,d[100],p;
	char b[100][10],c[10],str[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",str[i],&a[i]);
	for(i=0;i<n;i++)
		if(a[i]>=60)
		{
			d[k]=a[i];
			strcpy(b[k],str[i]);
			k++;
		}
	for(i=0;i<k;i++)
		for(j=0;j<k-i-1;j++)
			if(d[j]<d[j+1])
			{
				p=d[j+1];
				d[j+1]=d[j];
				d[j]=p;

				strcpy(c,b[j+1]);
				strcpy(b[j+1],b[j]);
				strcpy(b[j],c);

			}
	for(i=0;i<k;i++)
		printf("%s\n",b[i]);
	for(i=0;i<n;i++)
		if(a[i]<60)
			printf("%s\n",str[i]);
}