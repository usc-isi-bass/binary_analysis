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

int trans(int n,int m,int (*a)[5])
{
	int temp,j,i=0;
	if(0<=n&&n<=4&&0<=m&&m<=4)
	{
		for(j=0;j<5;j++)
		{
			temp=*(*(a+n)+j);
			*(*(a+n)+j)=*(*(a+m)+j);
			*(*(a+m)+j)=temp;
		}
		i=1;
	}
	return(i);
}
int main()
{
	int m,n,a[5][5],t,i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",*(a+i)+j);
	scanf("%d%d",&n,&m);
	t=trans(n,m,a);
	if(t==0)
		printf("error");
	else
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{
				if(j<4)
				printf("%d ",*(*(a+i)+j));
			    else
					printf("%d\n",*(*(a+i)+j));
			}

return 0;
}


