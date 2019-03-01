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
	struct book
	{
		int num;
		char writer[26];
	}bookn[999];
	struct zuozhe
	{
		char w;
		int count;
	}zuozhen[26];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<26;i++)
	{
		zuozhen[i].w='A'+i;
		zuozhen[i].count=0;
	}
	int h=0;
	int m,j;
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&bookn[i].num,bookn[i].writer);
		m=strlen(bookn[i].writer);
		for(j=0;j<m;j++)
		{
			h=bookn[i].writer[j]-'A';
			zuozhen[h].count++;
		}
	}
	struct zuozhe a;
	a=zuozhen[0];
	for(i=1;i<26;i++)
	{
		if(a.count<zuozhen[i].count)
			a=zuozhen[i];
	}
	printf("%c\n",a.w);
	printf("%d\n",a.count);
	int t;
	for(i=0;i<n;i++)
	{
		t=strlen(bookn[i].writer);
		for(j=0;j<t;j++)
		{
			if(bookn[i].writer[j]==a.w)
				printf("%d\n",bookn[i].num);
		}
	}
}


	
		

