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
	char a[510]={0},b[500][6]={0};
	int l,i,j,n,m=0,c[500]={0},s;
	scanf("%d\n",&n);
	gets(a);
	l=strlen(a);
	for(i=0;i<=l-n;i++)
		for(j=0;j<n;j++)
			b[i][j]=a[i+j];
	for(i=0;i<=l-n;i++)
		{s=1;
	    for(j=0;j<i;j++)
			if(c[j]!=-1)if(strcmp(b[j],b[i])==0){s=0;c[j]+=1;c[i]=-1;break;}
		if(s)c[i]+=1;}
	for(i=0;i<=l-n;i++)
		if(c[i]>m)m=c[i];
	if(m==1)printf("NO");
	else {printf("%d\n",m);
	     for(i=0;i<=l-n;i++)
		if(c[i]==m)puts(b[i]);}

	
}