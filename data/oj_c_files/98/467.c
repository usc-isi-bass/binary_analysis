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
	int n,i=-1,k=0,a[1000],p=0;
	char b[1000][42],c;
	scanf("%d",&n);
	while(i<n)
	{
	    
	c=getchar();	
		if(c==' '||c=='\n')
		{
			b[i][k]='\0';
			a[i]=strlen(b[i]);
			i=i+1;
			k=0;
			continue;}
b[i][k]=c;
		k=k+1;
		
	}

for(i=0;i<n;i++)
{
	p=p+1+a[i];

	if(p<81&&(p+a[i+1])<81&&i<n-1)
{printf("%s ",b[i]);}
else if(p=81&&i<n-1)
{
	printf("%s\n",b[i]);p=0;}
else if(p<81&&(p+a[i+1])>81&&i<n-1)
{
	printf("%s\n",b[i]);p=0;}
else if(i=n-1)
printf("%s\n",b[i]);

}

}
