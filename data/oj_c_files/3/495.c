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
	int i,j=0,n,k;
	int *head,*p1,*p2;
	scanf("%d%d",&n,&k);
	head=(int *)malloc(n*sizeof(int));
	p1=head;
	for(i=0;i<n;i++)
	{
		scanf("%d",p1);
		p1++;
	}
	for(p1=head;p1<head+n;p1++)
	{
		for(p2=p1+1;p2<head+n;p2++)
		{
			if(*p1+*p2==k){printf("yes");j=1;break;}
		}
		if(j)break;
	}
	if(j==0)printf("no");





}