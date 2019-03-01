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
	int n,i,j,length1,length2,cha;
	scanf("%d",&n);
	char beijianshu[101],jianshu[101];
	for(i=0;i<n;i++)
	{
		scanf("%s",beijianshu);
		scanf("%s",jianshu);
		length1=strlen(beijianshu);
		length2=strlen(jianshu);
		for(j=1;j<=length2;j++)
		{
			cha=beijianshu[length1-j]-jianshu[length2-j];
			if(cha>=0)
				beijianshu[length1-j]=cha+'0';
			else
			{
				beijianshu[length1-j-1]--;
				beijianshu[length1-j]=10+cha+'0';
			}
		}	
		while(beijianshu[length1-j]<'0')
		{
			beijianshu[length1-j]+=10;
			j++;
			beijianshu[length1-j]-=1;
		}

		printf("%s\n",beijianshu);
	}

}