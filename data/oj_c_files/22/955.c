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

int main()
{   
	int a[1000],i=1,j,k,t,p=0;                       
	char b[1000];
	while(1)
	{
		scanf("%d",&a[i++]);
		scanf("%c",&b[i]);
		if(b[i]!=',')break;
	}
for(j=1;j<=i-2;j++)
{
for(k=j+1;k<=i-1;k++)
if(a[k]<=a[j])
{t=a[k];
a[k]=a[j];
a[j]=t;}
}

for(j=i-1;j>=2;j--)
{
	if(a[j]>a[j-1]){printf("%d",a[j-1]);p=1;break;}  
}
if(p==0)printf("No");

  
	return 0;
} 