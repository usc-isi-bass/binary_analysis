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

int maximum(int a,int b)
{
	if(a>b) return a;
	else return b;
}
main()
{
	int i,j,n,k,len,sta[500]={0},x=0,max=0,num;
	char input[500];
	scanf("%d",&n);
	scanf("%s",input);
	len=strlen(input);
	for(i=0;i<len;i++)
	{
		for(k=0;k<i;k++)
		{
			x=0;
			for(j=0;j<n;j++)
			{
				if(input[i+j]==input[k+j])
					x++;
				else break;
			}
			if(x==n)
			{
				sta[k]++;
				max=maximum(max,sta[k]);
				break;
			}
		}
	}
	if(max==0) printf("NO");
	else
	{
	printf("%d\n",max+1);
	for(i=0;i<500;i++)
		if(sta[i]==max)
		{
			for(j=0;j<n;j++)
				printf("%c",input[i+j]);
			printf("\n");
		}
	}

}