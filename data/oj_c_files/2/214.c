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
	int id;
	char s[26];
}a[100];
int main()
{
	int m,i,n,j,k,max,maxnum;
	int aut1[26]={0},aut2[26][100]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i].id);
		gets(a[i].s);
		n=strlen(a[i].s);
		for(j=0;j<n;j++)
		{
			k=a[i].s[j]-'A';
			aut2[k][aut1[k]]=a[i].id;
            aut1[k]++;
		}
	}
    max=0;maxnum=0;
	for(i=0;i<26;i++)
	{
		if(aut1[i]>max)
		{
			max=aut1[i];
			maxnum=i;
		}
	}
	printf("%c\n",'A'+maxnum);
	printf("%d\n",max);
	printf("%d",aut2[maxnum][0]);
	for(i=1;i<max;i++)
	{
		printf("\n%d",aut2[maxnum][i]);
	}
}

	
