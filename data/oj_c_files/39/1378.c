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
	char str[100][20],a[100],b[100];
	int i,j,c[100],d[100],f[100],sum[100]={0};
	int   l=0,m=0,max;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    scanf("%s %d %d %c %c %d",str[i],&c[i],&d[i],&a[i],&b[i],&f[i]);
	for(i=0;i<n;i++)
	{
		if(c[i]>80 && f[i]>=1) sum[i]=sum[i]+8000;
		if(c[i]>85 && d[i]>80) sum[i]=sum[i]+4000;
		if(c[i]>90) sum[i]=sum[i]+2000;
		if(c[i]>85 && b[i]=='Y')  sum[i]=sum[i]+1000;
		if(d[i]>80 && a[i]=='Y') sum[i]=sum[i]+850;
	}
	max=0;
 for(i=0;i<n;i++)
 {
	 
	 if(max<sum[i])  max=sum[i]; 
	 m=m+sum[i];
 }
 for(i=0;i<n;i++)
	 if(max==sum[i]){printf("%s\n%d\n%d\n",str[i],max,m);break;}
 
}