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
	int a[8][8],f,g,b,m,n,i,j,max[8],number=0,c,flag=1,flag2=1,p,t;
	scanf("%d,%d",&f,&g);
	for(i=0;i<f;i++)
		for(j=0;j<g;j++)
			scanf("%d",&a[i][j]);
		for(i=0;i<f;i++) 
{ m=0; 
for(j=0;j<g;j++) 
if(a[i][m]<=a[i][j]) m=j,p=i; 
n=0; 
for(i=0;i<f;i++) 
if(a[n][m]>=a[i][m]) n=i; 
{if(p==n) 
printf("%d+%d",p,m);} 
number++; 
} 
if(p!=n) 
printf("No"); 
}
