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
    int k,i,j,m;
	scanf("%d\n",&k);
	int a[k];
	for(i=0;i<k;i++)scanf("%d",&a[i]);
	m=k;
	for(i=0;i<k;i++)
	{
		
		for(j=i+1;j<k;j++)
		{
		if(a[j]==a[i]){a[j]=-j*2*2*2*2;m--;}
		}
	}
	int b[m],p;
	b[0]=a[0];
	for(j=1,i=1;j<k;j++)
		{
		if(a[j]>0){b[i]=a[j];i++;}
		}
	p=m-1;
	for(i=0;i<p;i++)printf("%d,",b[i]);
	printf("%d\n",b[m-1]);
}