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

void selectionsort(int a[],int s,int e)
{int i,j,t,min;
for(i=s;i<e;i++)
{min=i;
for(j=i+1;j<e;j++)
if(a[min]>a[j])min=j;
t=a[i];a[i]=a[min];a[min]=t;
}
}
void main()
{
	int a[300],n=1,i;
	scanf("%d",a);
	while(scanf(",%d",&a[n++]));
	n--;i=n-1;
	selectionsort(a,0,n);
	while(a[n-1]==a[i]&&i>0)i--;
	if(i)printf("%d",a[i]);
	else if(a[0]<a[n-1])printf("%d",a[0]);
	else printf("No");
}