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
	int m,n;
	int in[320];   //????
	int i;
	int num;        //????
	int last;
	while(1>0)
	{
		scanf("%d%d",&n,&m);
		if((n==0)||(m==0))
			break;
		else
		{
			for(i=1;i<=n;i++)
			{
				in[i]=i;   //?????
			//	printf("%d\n",in[i]);  //debug
			}
			//??????
			last=1;
			num=n;
			while(num!=1)
			{
				last+=m-1;   //??????
			//	printf("%d",last);   //debug
				while(last>num)
				{
					last=last-num;
				}
			//	printf("   %d\n",last);//debug
				num--;
				for(i=last;i<=n;i++)
				{
					in[i]=in[i+1];
				}
			//	printf("\n%d",num);  //debug
			/*	for(i=1;i<=num;i++)
				{
					printf(" %d",in[i]);
				}
				printf("\n");  */   //debug
			}
			printf("%d\n",in[1]);
		}
	}
	return 0;
}