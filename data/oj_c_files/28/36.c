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

main()
{
	int l[500]={0},i,max,k,zero=1;
	char temp;
	max=1;
	temp=getchar();
	while(temp!='\n')
	{
		if(temp!=' ')
		{
			l[max]++;
			zero=1;
		}
		else
		{
			if(zero==1)max++;
			zero=0;
		}
		temp=getchar();
//		printf("%c",temp);
//		printf("%d\n",max);
	}
	for(i=1;i<=max;i++)
	{
		if(i!=1)printf(",");
		printf("%d",l[i]);
	}
}
	