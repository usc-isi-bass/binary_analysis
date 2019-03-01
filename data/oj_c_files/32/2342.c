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
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		char s1[101],s2[101]={'0'},s3[101]={'\0'};
		scanf("%s",s1);
		scanf("%s",s2);
		printf("\n");
		int l1,l2,j,u=0;
		l1=strlen(s1);
		l2=strlen(s2);
		for(j=1;j<=l2;j++)
		{
			int x,y,z;
			x=s1[l1-j]-'0';
			y=s2[l2-j]-'0';
			if(x+u>=y)
			{
				z=x-y+u;
				u=0;
			}
			else
			{
				z=10+x-y+u;
				u=-1;
			}
			s3[l1-j]=z+'0';
		}
		if(l1>l2)
		{
			int k,l;
			k=s1[l1-l2-1]-'0';
			s3[l1-l2-1]=k+u+'0';
			for(l=0;l<l1-l2-1;l++)
				s3[l]=s1[l];
		}
		printf("%s",s3);
	}
	return 0;
}

		


