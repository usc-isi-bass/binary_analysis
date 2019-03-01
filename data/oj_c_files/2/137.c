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

struct book
{	
   int num;
   char aut[26];
}b[999];
void main()
{
	int i,j,m,n,k,max,p;
	int a[26]={0},q[999]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d %s",&b[i].num,b[i].aut);
	for(i=0;i<m;i++)
	{
		n=strlen(b[i].aut);
		for(j=0;j<n;j++)
		{
			k=b[i].aut[j];
			a[k-65]++;
		}

	}
	for(i=1,max=a[0],p=0;i<26;i++)
	{
		if(a[i]>max)
		{
			p=i;
			max=a[i];
		}
	}
	printf("%c\n%d",p+65,max);
	for(i=0;i<m;i++)
	{
		n=strlen(b[i].aut);
		for(j=0;j<n;j++)
			if(b[i].aut[j]==(p+65))
				q[i]=1;			
	}
	for(i=0;i<m;i++)
		if(q[i]==1)
			printf("\n%d",b[i].num);	
}