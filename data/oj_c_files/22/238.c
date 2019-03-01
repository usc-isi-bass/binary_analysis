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
	int a[300],i=1,j,k,m,t;
	char c;
	scanf("%d",&a[0]);
	while((c=getchar())==',')
	{
		scanf("%d",&a[i]);
		i++;
	}
	for(j=0;j<i-1;j++)
	{
		m=j;
		for(k=j+1;k<i;k++)
			if(a[k]>a[m]) m=k;
		if(m>j)
		{t=a[m];a[m]=a[j];a[j]=t;}
	}
	j=1;
	while(a[j]==a[0])
		j++;
	if(i==1||j==i)
		printf("No");
	else
        printf("%d",a[j]);
}
