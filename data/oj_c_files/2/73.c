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
	int i,j,k,n,num[1000],len[1000],num1[1000][26]={0},sum[26]={0},max=0,m;
	char writer[1000][26],letter[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&num[i],writer[i]);
        len[i]=strlen(writer[i]);
	}
	for(i=0;i<26;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<len[j];k++)
			{
				if(writer[j][k]==letter[i])
				{
					num1[j][i]++;
				}
			}
		}
	}
	for(i=0;i<26;i++)
	{
		for(j=0;j<n;j++)
		{
	       sum[i]=sum[i]+num1[j][i]; 
		}	
	}
	for(i=0;i<26;i++)
	{
		if(max<sum[i])
		{
			max=sum[i];
			m=i;
		}
	}
	printf("%c\n%d\n",letter[m],sum[m]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<len[i];j++)
		{
			if(writer[i][j]==letter[m])
			{
				printf("%d\n",num[i]);
			}
		}
	}
	return 0;
}