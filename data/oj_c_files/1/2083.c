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

int fenjie(int n,int min)
{
int x=0,i;
if(n==1)
return 1;
else
{
	for(i=min;i<=n;i++)
	{
		if(n%i==0)
		x=x+fenjie(n/i,i);}
}
return x;}
main()
{int shu;
	int number,count=1;
	scanf("%d",&number);
	while(count<number)
	{
		scanf("%d",&shu);
		printf("%d\n",fenjie(shu,2));
	count++;	}
	scanf("%d",&shu);
	printf("%d",fenjie(shu,2));
		
}