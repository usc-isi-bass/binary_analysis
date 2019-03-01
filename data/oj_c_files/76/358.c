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

int main(){
	int array[10000],i,n,ai,bi,head,tail,sum=0;
	scanf("%d",&n);
	for (i=0;i<10000;i++)
		array[i]=0;
	for (i=0;i<n;i++)
		{	
		scanf("%d%d",&ai,&bi);
		array[ai]++;
		array[bi]--;
		}
	ai=0;
	bi=0;
	while (array[ai]==0)
		ai++;
	sum=sum+array[ai];
	head=ai;
	ai++;
	while (sum>0)
		{
		sum+=array[ai];
		ai++;
		}
	tail=ai-1;
	for (i=ai;i<10000;i++)
		if (array[i]>0)
			{
			printf("no");
			bi=1;
			break;
			}
	if (bi==0)
		printf("%d %d",head,tail);
	return 0;
}