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
	char (*name)[100000];
	int sum[26],len,j,temp=0,i,q,flag=0;
	char p[10];
	int t;
	scanf("%d",&t);
	gets(p);
	name=(char (*)[100000])malloc(100000*sizeof(char)*20);
	for(i=0;i<t;i++)
	gets(*(name+i));
	for(i=0;i<t;i++)
	{
		flag=0;
		for(q=0;q<25;q++)
			sum[q]=0;                    
		len=strlen(*(name+i));
		for(j=0;j<len;j++)
		{
			temp=(int)*(*(name+i)+j)-97;
	         sum[temp]=sum[temp]+1;
		}
			for(j=0;j<len;j++)
			{
				temp=(int)*(*(name+i)+j)-97;
			if(sum[temp]==1)
			{
				flag=1;
				printf("%c\n",temp+97);
				break;
			}
			}
		if (flag==0) printf("no\n");
	}
}