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

int judge(int num)
{
	if(num%7==0) return 0;
	while(num>0)
	{
		if((num-7)%10==0) return 0;
		num/=10;
	}
	return 1;
}
void main()
{
    int i,num,sum=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		if(judge(i)==1) sum+=i*i;
	printf("%d\n",sum);
}
