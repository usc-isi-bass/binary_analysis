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
	int i,j,*p,a[5][5],m,n,s=1,b;
	p=&b;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++) scanf("%d",*(a+i)+j);
	}
	scanf("%d %d",&m,&n);
	if(m>4||m<0||n>4||n<0) 
	{
		s=0;
		printf("error\n");
	}
	else
	{
		for(j=0;j<5;j++)
		{
			*p=*(*(a+m)+j);
			*(*(a+m)+j)=*(*(a+n)+j);
			*(*(a+n)+j)=*p;
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++) printf("%d%c",*(*(a+i)+j),(j==4)?'\n':' ');
		}
	}
	return s;
}



