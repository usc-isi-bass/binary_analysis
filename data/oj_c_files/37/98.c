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
	int t,i,j,s=0,sum=0,m,n;
	char a[100]={0,0},b[100000]={0,0};
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{scanf("%s",b);
	sum=0;
	for (j=0;b[j]!='\0';j++)
	{   s=0;
	{for (m=0;(s!=2)&&(b[m]!='\0');m++)
		if ((b[j])==(b[m])) s=s+1;}
	if (s==1) {a[i]=b[j];sum=sum+1;break;}
}	
	if (sum==0) a[i]='$';
	}

	for (i=0;i<strlen(a);i++)
	{if(a[i]=='$') printf("no\n");else printf("%c\n",a[i]);}
}