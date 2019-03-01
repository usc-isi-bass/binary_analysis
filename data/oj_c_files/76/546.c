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

int main(){
	int n,x,i,j,p,a[100],b[100];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1]) {x=a[j];a[j]=a[j+1];a[j+1]=x;}
	}
	for(i=0;i<n-1;i++)
	{
	   for(j=0;j<n-i-1;j++)
		   if(b[j]>b[j+1])  {x=b[j];b[j]=b[j+1];b[j+1]=x;}
	}
	p=1;
	for(i=0;i<n-1;i++)
	{if(b[i]<a[i+1]) p=0;}
	if(p==1)
	{
		printf("%d %d",a[0],b[n-1]);
	}
	else{printf("no");}
	return 0;




}
