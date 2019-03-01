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
	int n,k;
	int *p,*head,*chuanwei;
	int remaining;
	scanf("%d",&n);
	remaining=n;
	p=(int *)calloc(n+1,sizeof(int));
	head=p;
	for(;p<head+n;p++)
		scanf("%d",p);
	scanf("%d",&k);
	for(p=head;p<head+remaining;p++)
	{
		while(*p==k&&p<head+remaining)
		{
			remaining--;
			for(chuanwei=p;chuanwei<head+remaining;chuanwei++)
			{
				*chuanwei=*(chuanwei+1);
			}
		}
	}
	for(p=head;p<head+remaining-1;p++)
	{
		printf("%d ",*p);
	}
	printf("%d",*p);
	return 0;
}