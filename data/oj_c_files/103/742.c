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
	char x[1000];
	int i,changdu,num=0;
	scanf("%s",x);
	changdu=strlen(x);
	for(i=0;i<changdu;i++)
	{
		if(x[i]>='a'&&x[i]<='z')
			x[i]-=32;
	}
	if(changdu==1)printf("(%c,%d)",x[0],1);
	for(i=0;i<changdu-1;i++)
	{
		if(x[i]==x[i+1])num++;
		if(x[i]!=x[i+1])
		{
			printf("(%c,%d)",x[i],++num);
			num=0;
		}
		if((x[i]==x[i+1])&&(i==changdu-2))printf("(%c,%d)",x[i],++num);
		if((x[i]!=x[i+1])&&(i==changdu-2))printf("(%c,%d)",x[i+1],1);
	}
	printf("\n");
	return 0;
}