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
	int array[5][5];
	int (*p)[5],i,j;
	int m,n;
	int num[5];
	p=array;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&array[i][j]);
	scanf("%d%d",&m,&n);
	if(m>=0&&m<=4&&n>=0&&n<=4)
	{
		for(i=0;i<5;i++)
		{
			num[i]=*(*(p+m)+i);
			*(*(p+m)+i)=*(*(p+n)+i);
			*(*(p+n)+i)=num[i];
        }
	
	for(i=0;i<5;i++)
		printf("%d %d %d %d %d\n",array[i][0],array[i][1],array[i][2],array[i][3],array[i][4]);
	}
    else printf("error");



}