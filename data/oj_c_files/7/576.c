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
	int n,m,z=1,l=0,flag=0;
	int i=0,k=0,num=0,j=0;
	char s[256]={0},w[256]={0},mid[256]={0},out[256]={0},p[256]={0};
	gets(w);
	gets(s);
	gets(p);
	n=strlen(s);
	m=strlen(w);
	for(;l<m-1;)
	{
		for(i=0;i<n;i++,k++)
		{
			mid[i]=w[k];	
		}
		z++;
		k=z;
		num++;
		if(strcmp(mid,s)==0)
		{
			flag=1;
			break;
		}
		l++;
	}

	if(flag==0)
	{
		puts(w);
	}
	else
	{
		j=num;
		for(i=0;i<n;i++,j++)
		{
			w[j]=p[i];
		}
		puts(w);
	}
}

