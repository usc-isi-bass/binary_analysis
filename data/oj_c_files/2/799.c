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
	int n,i,j,sh[100],a[26]={0},b[26][100];
	int max,t,m;
	char ch[100][40]={'\0'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&sh[i],ch[i]);
	}
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<40;j++)
		{
			m=ch[i][j];
			if(m>64 && m<91)
			{a[m-65]++;b[m-65][a[m-65]]=sh[i];}
	}}
	max=0;
	for(i=0;i<26;i++)
	{
		if(a[i]>max)
		{
			max=a[i];t=i;
		}
	}
	printf("%c\n",65+t);
	printf("%d\n",a[t]);
	for(i=1;i<=a[t];i++)
	{
		printf("%d\n",b[t][i]);
	}
}