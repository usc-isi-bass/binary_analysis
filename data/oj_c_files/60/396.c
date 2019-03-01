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
	int n,i,flag,j,num=0,m;
	int *index;
	scanf("%d",&n);
	index=(int *)malloc(n*sizeof(int));
	for(i=2;i<=n;i++)//???????
	{
		flag=1;
		m=(int)sqrt((float)i);
		for(j=2;j<=m&&flag==1;j++)
			if(i%j==0) flag=0;
		if(flag==1)
		{
			(*(index+num))=i;
			num++;
		}
	}
	flag=0;//?????????????
	for(i=0;i<num-1;i++)
	{
		if(*(index+i)==(*(index+i+1)-2))
		{
		    flag=1;
			printf("%d %d\n",*(index+i),*(index+i+1));
		}
	}
    if(flag==0) printf("empty");
}
