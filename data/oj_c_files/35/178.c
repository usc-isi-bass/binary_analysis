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
	int a[100][100]={0},m,n,*p,*q,z=0,i,j,m1,n1,m2,n2;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		p=a[i];
		for(j=0;j<n;j++)
		{
			if(*p<a[i][j]){p=&a[i][j];m1=i;n1=j;}
		}
		q=p-100*i;
		for(j=0;j<m;j++)
		{
			if(*q<*p)break;
			else q=q+100;
		}
		if(j==m){z=1;m2=m1;n2=n1;}
	}
	if(z==1)printf("%d+%d",m2,n2);
	else printf("No");
}
