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
	int a[300];
	char b[300]={'\0'};
	int i=0,j=0,m,n;
	b[0]=',';
	while(b[i]==',')
	{
		scanf("%d",&a[i]);
		scanf("%c",&b[i+1]);
		i++;
	}
	m=i;/*m numbers*/
	for(i=0;i<m-1;i++)
		for(j=i;j<m;j++)
			if(a[j]>a[i])
			{
				n=a[i];
				a[i]=a[j];
				a[j]=n;
			}
    for(i=0;i<=m-1;i++)
		if(a[i]<a[0])
		{
			printf("%d",a[i]);
			break;
		}
		else if(i==m-1)
            printf("No");
}

		