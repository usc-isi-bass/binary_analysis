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
	int a[301]={0},i,j,k,n=0,posi[300]={0},b1,b2=-1,t;
	char s[2000];
	gets(s);
	posi[0]=0;
	for(i=1,j=1;i<=strlen(s)-1;i++)
	{
	    if(s[i]==','){posi[j]=i+1;j++;}
	}
	posi[j]=strlen(s)+1;//?j???posi[0]to posi j-1
	for(i=0;i<=j-1;i++)
	{
	    for(k=posi[i];k<=posi[i+1]-2;k++)
	    {
	        a[i]=s[k]-48+10*a[i];
	    }
	}
	b1=a[0];
	for(i=1;i<=j-1;i++)
	{
	    if(a[i]>b1){t=b1;b1=a[i];b2=t;}
	    else if(a[i]<b1&&a[i]>b2)b2=a[i];
	}
	if(b2>=0)printf("%d\n",b2);
	else printf("No\n");
	return 0;
}
