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
	int n,i,j,k;
	int str[100]={0};
	str[1]=1;
	str[2]=1;
	int a=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a==1||a==2)
			printf("1\n");
		else
		{
		for(j=3;j<=a;j++)
			str[j]+=str[j-1]+str[j-2];
		printf("%d\n",str[a]);
		for(k=3;k<=a;k++)
			str[k]=0;
		}
	}
		
}
