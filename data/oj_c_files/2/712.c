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
	char wr[26];
};
int main()
{	
	int n,b[91][1000],max=0,i,j,k,s,m,writer;
	struct book bk[1000];
	scanf("%d",&n);//??????//
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&bk[i].num,bk[i].wr);
	}//?????????//
	for(i=0;i<26;i++)//?????//
	{
		s=0;
		for(j=0;j<n;j++)//???????i???//
		{
			m=strlen(bk[j].wr);//??????//
			for(k=0;k<m;k++)
			{
				if(bk[j].wr[k]==i+65)
				{
					b[i][s]=bk[j].num;//??i+65??s+1?????//
					s++;
					k=m;
				}
			}
		}
		if(s>max)//s???i?????//
		{
			max=s;
			writer=i;
		}
	}
	printf("%c\n%d",writer+65,max);
	for(i=0;i<max;i++)
		printf("\n%d",b[writer][i]);
	return 0;
}