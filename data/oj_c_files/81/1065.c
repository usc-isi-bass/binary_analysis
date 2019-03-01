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
	int a[5][5],m,n,i,j,(*p)[5],temp;
	p=a;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",(*(p+i)+j));
	}
    scanf("%d %d",&m,&n);
	if(n>4||n<0||m>4||m<0) printf("error\n");
	else{
	for(i=0;i<5;i++)
	{
		temp=*(*(p+m)+i);
		*(*(p+m)+i)=*(*(p+n)+i);
		*(*(p+n)+i)=temp;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			if(j==0) printf("%d",*(*(p+i)+j));
			else printf(" %d",*(*(p+i)+j));
		printf("\n");
	}
	}
	return 0;
}