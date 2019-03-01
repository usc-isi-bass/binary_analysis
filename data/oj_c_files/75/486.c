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
	int time[1001]={0};
	int xi[1001];
	int yi[1000];
	int i=0,n,j;
	char ch=',';


	while( ch!='\n' )
	{
		scanf("%d",&xi[i]);
		ch=getchar();
		i++;
	}
	i=0;
	ch=',';
	while( ch!='\n' )
	{
		scanf("%d",&yi[i]);
		ch=getchar();
		i++;
	}
	n=i;

	for( i=0;i<n;i++ )
	{
		for(j=xi[i];j<yi[i];j++)
			time[j]++;
	}
	int max=0;

	for(i=0;i<1001;i++)
		if( time[i]>=max )
			max=time[i];
	printf("%d %d\n",n,max);

		

	return 0;
}
