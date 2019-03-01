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
	int t,i,n,j,k;
	char str[100000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",str);
		n=strlen(str);
		for(j=0;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(str[j]==str[k]){str[j]=str[k]=1;break;}
			}
			if(k==j+1){j=k;}
			else if(k==n){printf("%c\n",str[j]);break;}
		}
		if(j>=n-1){printf("no\n");}
	}
}