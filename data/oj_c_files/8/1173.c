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

void sca(int n,int l);
int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	sca(n1,1);
	sca(n2,2);
}
void sca(int n,int l)
{
int i,j,a[100]={0},p;
for (i=0;i<n;i=i+1)
{
	scanf("%d",&a[i]);
	for(j=i;j>0;j=j-1)
	{
		if (a[j]<a[j-1])
		{
			p=a[j];
			a[j]=a[j-1];
			a[j-1]=p;
		}
	}
}
for(i=0;i<n-1;i=i+1)
	printf("%d ",a[i]);
 if (l==1) printf("%d ",a[n-1]);
 else printf("%d",a[n-1]);
}